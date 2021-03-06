// Vita3K emulator project
// Copyright (C) 2019 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "interface.h"
#include "private.h"

#include <gui/functions.h>

#include <nfd.h>

namespace gui {

bool delete_archive_file = false;
nfdchar_t *archive_path = nullptr;

void draw_archive_install_dialog(GuiState &gui, HostState &host) {
    nfdresult_t result = NFD_CANCEL;

    static bool draw_file_dialog = true;
    static bool content_install_confirm = false;

    if (draw_file_dialog) {
        result = NFD_OpenDialog("vpk,zip", nullptr, &archive_path);
        draw_file_dialog = false;

        if (result == NFD_OKAY) {
            if (install_archive(host, &gui, static_cast<fs::path>(archive_path)))
                content_install_confirm = true;
            else if (!gui.content_reinstall_confirm)
                ImGui::OpenPopup("Content installation failed");
        } else {
            gui.file_menu.archive_install_dialog = false;
            draw_file_dialog = true;
        }
    }

    static const auto BUTTON_SIZE = ImVec2(60.f, 0.f);

    if (gui.content_reinstall_confirm)
        ImGui::OpenPopup("Content reinstallation");
    ImGui::PushStyleColor(ImGuiCol_Text, GUI_COLOR_TEXT_MENUBAR);
    if (ImGui::BeginPopupModal("Content reinstallation", &gui.content_reinstall_confirm, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::PopStyleColor();
        ImGui::TextColored(GUI_COLOR_TEXT, "This content is already installed:\n%s [%s].", host.app_title_id.c_str(), host.app_title.c_str());
        if (!gui.app_ver.empty() && gui.app_ver != host.app_version)
            ImGui::TextColored(GUI_COLOR_TEXT, "Update content version from: %s to: %s.", gui.app_ver.c_str(), host.app_version.c_str());
        ImGui::Spacing();
        ImGui::TextColored(GUI_COLOR_TEXT, "Do you want to reinstall it?");
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::SetCursorPosX(ImGui::GetWindowWidth() / 2 - 65);
        if (ImGui::Button("Yes", BUTTON_SIZE))
            if (install_archive(host, &gui, static_cast<fs::path>(archive_path))) {
                gui.content_reinstall_confirm = false;
                content_install_confirm = true;
            }
        ImGui::SameLine();
        if (ImGui::Button("No", BUTTON_SIZE)) {
            archive_path = nullptr;
            gui.content_reinstall_confirm = false;
            gui.file_menu.archive_install_dialog = false;
            draw_file_dialog = true;
        }
        ImGui::EndPopup();
    } else
        ImGui::PopStyleColor();

    if (content_install_confirm)
        ImGui::OpenPopup("Content installation succes");
    ImGui::PushStyleColor(ImGuiCol_Text, GUI_COLOR_TEXT_MENUBAR);
    if (ImGui::BeginPopupModal("Content installation succes", &content_install_confirm, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::PopStyleColor();
        ImGui::SetCursorPosX(ImGui::GetWindowWidth() / 5);
        ImGui::TextColored(GUI_COLOR_TEXT, "Succesfully installed content.\n%s [%s] %s", host.app_title_id.c_str(), host.app_title.c_str(), host.app_version.c_str());
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::Checkbox("Delete the archive for the content installed?", &delete_archive_file);
        ImGui::Spacing();
        ImGui::SetCursorPosX(ImGui::GetWindowWidth() / 2 - 30);
        if (ImGui::Button("Ok", BUTTON_SIZE)) {
            if (delete_archive_file) {
                fs::remove(fs::path(archive_path));
                delete_archive_file = false;
            }
            content_install_confirm = false;
            draw_file_dialog = true;
            archive_path = nullptr;
            refresh_app_list(gui, host);
            gui.file_menu.archive_install_dialog = false;
        }
        ImGui::EndPopup();
    } else
        ImGui::PopStyleColor();

    ImGui::PushStyleColor(ImGuiCol_Text, GUI_COLOR_TEXT_MENUBAR);
    if (ImGui::BeginPopupModal("Content installation failed", nullptr, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::PopStyleColor();
        ImGui::TextColored(GUI_COLOR_TEXT, "Installation failed, please check the log for more information.");
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::Checkbox("Delete the archive for the content that failed to install?", &delete_archive_file);
        ImGui::Spacing();
        ImGui::SetCursorPosX(ImGui::GetWindowWidth() / 2 - 30);
        if (ImGui::Button("Ok", BUTTON_SIZE)) {
            if (delete_archive_file) {
                fs::remove(fs::path(archive_path));
                delete_archive_file = false;
            }
            draw_file_dialog = true;
            archive_path = nullptr;
            gui.file_menu.archive_install_dialog = false;
        }
        ImGui::EndPopup();
    } else
        ImGui::PopStyleColor();
}

} // namespace gui
