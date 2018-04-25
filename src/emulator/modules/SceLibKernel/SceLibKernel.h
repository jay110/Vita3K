// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
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

#pragma once

#include <module/module.h>

BRIDGE_DECL(SceKernelStackChkGuard)
BRIDGE_DECL(__sce_aeabi_idiv0)
BRIDGE_DECL(__sce_aeabi_ldiv0)
BRIDGE_DECL(__stack_chk_fail)
BRIDGE_DECL(__stack_chk_guard)
BRIDGE_DECL(_sceKernelCreateLwMutex)
BRIDGE_DECL(sceClibAbort)
BRIDGE_DECL(sceClibDprintf)
BRIDGE_DECL(sceClibLookCtypeTable)
BRIDGE_DECL(sceClibMemchr)
BRIDGE_DECL(sceClibMemcmp)
BRIDGE_DECL(sceClibMemcmpConstTime)
BRIDGE_DECL(sceClibMemcpy)
BRIDGE_DECL(sceClibMemcpyChk)
BRIDGE_DECL(sceClibMemcpy_safe)
BRIDGE_DECL(sceClibMemmove)
BRIDGE_DECL(sceClibMemmoveChk)
BRIDGE_DECL(sceClibMemset)
BRIDGE_DECL(sceClibMemsetChk)
BRIDGE_DECL(sceClibMspaceCalloc)
BRIDGE_DECL(sceClibMspaceCreate)
BRIDGE_DECL(sceClibMspaceDestroy)
BRIDGE_DECL(sceClibMspaceFree)
BRIDGE_DECL(sceClibMspaceIsHeapEmpty)
BRIDGE_DECL(sceClibMspaceMalloc)
BRIDGE_DECL(sceClibMspaceMallocStats)
BRIDGE_DECL(sceClibMspaceMallocStatsFast)
BRIDGE_DECL(sceClibMspaceMallocUsableSize)
BRIDGE_DECL(sceClibMspaceMemalign)
BRIDGE_DECL(sceClibMspaceRealloc)
BRIDGE_DECL(sceClibMspaceReallocalign)
BRIDGE_DECL(sceClibPrintf)
BRIDGE_DECL(sceClibSnprintf)
BRIDGE_DECL(sceClibSnprintfChk)
BRIDGE_DECL(sceClibStrcatChk)
BRIDGE_DECL(sceClibStrchr)
BRIDGE_DECL(sceClibStrcmp)
BRIDGE_DECL(sceClibStrcpyChk)
BRIDGE_DECL(sceClibStrlcat)
BRIDGE_DECL(sceClibStrlcatChk)
BRIDGE_DECL(sceClibStrlcpy)
BRIDGE_DECL(sceClibStrlcpyChk)
BRIDGE_DECL(sceClibStrncasecmp)
BRIDGE_DECL(sceClibStrncat)
BRIDGE_DECL(sceClibStrncatChk)
BRIDGE_DECL(sceClibStrncmp)
BRIDGE_DECL(sceClibStrncpy)
BRIDGE_DECL(sceClibStrncpyChk)
BRIDGE_DECL(sceClibStrnlen)
BRIDGE_DECL(sceClibStrrchr)
BRIDGE_DECL(sceClibStrstr)
BRIDGE_DECL(sceClibStrtoll)
BRIDGE_DECL(sceClibTolower)
BRIDGE_DECL(sceClibToupper)
BRIDGE_DECL(sceClibVdprintf)
BRIDGE_DECL(sceClibVprintf)
BRIDGE_DECL(sceClibVsnprintf)
BRIDGE_DECL(sceClibVsnprintfChk)
BRIDGE_DECL(sceIoChstat)
BRIDGE_DECL(sceIoChstatAsync)
BRIDGE_DECL(sceIoChstatByFd)
BRIDGE_DECL(sceIoCompleteMultiple)
BRIDGE_DECL(sceIoDevctl)
BRIDGE_DECL(sceIoDevctlAsync)
BRIDGE_DECL(sceIoDopen)
BRIDGE_DECL(sceIoDread)
BRIDGE_DECL(sceIoGetstat)
BRIDGE_DECL(sceIoGetstatAsync)
BRIDGE_DECL(sceIoGetstatByFd)
BRIDGE_DECL(sceIoIoctl)
BRIDGE_DECL(sceIoIoctlAsync)
BRIDGE_DECL(sceIoLseek)
BRIDGE_DECL(sceIoLseekAsync)
BRIDGE_DECL(sceIoMkdir)
BRIDGE_DECL(sceIoMkdirAsync)
BRIDGE_DECL(sceIoOpen)
BRIDGE_DECL(sceIoOpenAsync)
BRIDGE_DECL(sceIoPread)
BRIDGE_DECL(sceIoPreadAsync)
BRIDGE_DECL(sceIoPwrite)
BRIDGE_DECL(sceIoPwriteAsync)
BRIDGE_DECL(sceIoRemove)
BRIDGE_DECL(sceIoRemoveAsync)
BRIDGE_DECL(sceIoRename)
BRIDGE_DECL(sceIoRenameAsync)
BRIDGE_DECL(sceIoRmdir)
BRIDGE_DECL(sceIoRmdirAsync)
BRIDGE_DECL(sceIoSync)
BRIDGE_DECL(sceIoSyncAsync)
BRIDGE_DECL(sceKernelAtomicAddAndGet16)
BRIDGE_DECL(sceKernelAtomicAddAndGet32)
BRIDGE_DECL(sceKernelAtomicAddAndGet64)
BRIDGE_DECL(sceKernelAtomicAddAndGet8)
BRIDGE_DECL(sceKernelAtomicAddUnless16)
BRIDGE_DECL(sceKernelAtomicAddUnless32)
BRIDGE_DECL(sceKernelAtomicAddUnless64)
BRIDGE_DECL(sceKernelAtomicAddUnless8)
BRIDGE_DECL(sceKernelAtomicAndAndGet16)
BRIDGE_DECL(sceKernelAtomicAndAndGet32)
BRIDGE_DECL(sceKernelAtomicAndAndGet64)
BRIDGE_DECL(sceKernelAtomicAndAndGet8)
BRIDGE_DECL(sceKernelAtomicClearAndGet16)
BRIDGE_DECL(sceKernelAtomicClearAndGet32)
BRIDGE_DECL(sceKernelAtomicClearAndGet64)
BRIDGE_DECL(sceKernelAtomicClearAndGet8)
BRIDGE_DECL(sceKernelAtomicClearMask16)
BRIDGE_DECL(sceKernelAtomicClearMask32)
BRIDGE_DECL(sceKernelAtomicClearMask64)
BRIDGE_DECL(sceKernelAtomicClearMask8)
BRIDGE_DECL(sceKernelAtomicCompareAndSet16)
BRIDGE_DECL(sceKernelAtomicCompareAndSet32)
BRIDGE_DECL(sceKernelAtomicCompareAndSet64)
BRIDGE_DECL(sceKernelAtomicCompareAndSet8)
BRIDGE_DECL(sceKernelAtomicDecIfPositive16)
BRIDGE_DECL(sceKernelAtomicDecIfPositive32)
BRIDGE_DECL(sceKernelAtomicDecIfPositive64)
BRIDGE_DECL(sceKernelAtomicDecIfPositive8)
BRIDGE_DECL(sceKernelAtomicGetAndAdd16)
BRIDGE_DECL(sceKernelAtomicGetAndAdd32)
BRIDGE_DECL(sceKernelAtomicGetAndAdd64)
BRIDGE_DECL(sceKernelAtomicGetAndAdd8)
BRIDGE_DECL(sceKernelAtomicGetAndAnd16)
BRIDGE_DECL(sceKernelAtomicGetAndAnd32)
BRIDGE_DECL(sceKernelAtomicGetAndAnd64)
BRIDGE_DECL(sceKernelAtomicGetAndAnd8)
BRIDGE_DECL(sceKernelAtomicGetAndClear16)
BRIDGE_DECL(sceKernelAtomicGetAndClear32)
BRIDGE_DECL(sceKernelAtomicGetAndClear64)
BRIDGE_DECL(sceKernelAtomicGetAndClear8)
BRIDGE_DECL(sceKernelAtomicGetAndOr16)
BRIDGE_DECL(sceKernelAtomicGetAndOr32)
BRIDGE_DECL(sceKernelAtomicGetAndOr64)
BRIDGE_DECL(sceKernelAtomicGetAndOr8)
BRIDGE_DECL(sceKernelAtomicGetAndSet16)
BRIDGE_DECL(sceKernelAtomicGetAndSet32)
BRIDGE_DECL(sceKernelAtomicGetAndSet64)
BRIDGE_DECL(sceKernelAtomicGetAndSet8)
BRIDGE_DECL(sceKernelAtomicGetAndSub16)
BRIDGE_DECL(sceKernelAtomicGetAndSub32)
BRIDGE_DECL(sceKernelAtomicGetAndSub64)
BRIDGE_DECL(sceKernelAtomicGetAndSub8)
BRIDGE_DECL(sceKernelAtomicGetAndXor16)
BRIDGE_DECL(sceKernelAtomicGetAndXor32)
BRIDGE_DECL(sceKernelAtomicGetAndXor64)
BRIDGE_DECL(sceKernelAtomicGetAndXor8)
BRIDGE_DECL(sceKernelAtomicOrAndGet16)
BRIDGE_DECL(sceKernelAtomicOrAndGet32)
BRIDGE_DECL(sceKernelAtomicOrAndGet64)
BRIDGE_DECL(sceKernelAtomicOrAndGet8)
BRIDGE_DECL(sceKernelAtomicSet16)
BRIDGE_DECL(sceKernelAtomicSet32)
BRIDGE_DECL(sceKernelAtomicSet64)
BRIDGE_DECL(sceKernelAtomicSet8)
BRIDGE_DECL(sceKernelAtomicSubAndGet16)
BRIDGE_DECL(sceKernelAtomicSubAndGet32)
BRIDGE_DECL(sceKernelAtomicSubAndGet64)
BRIDGE_DECL(sceKernelAtomicSubAndGet8)
BRIDGE_DECL(sceKernelAtomicXorAndGet16)
BRIDGE_DECL(sceKernelAtomicXorAndGet32)
BRIDGE_DECL(sceKernelAtomicXorAndGet64)
BRIDGE_DECL(sceKernelAtomicXorAndGet8)
BRIDGE_DECL(sceKernelBacktrace)
BRIDGE_DECL(sceKernelBacktraceSelf)
BRIDGE_DECL(sceKernelCallModuleExit)
BRIDGE_DECL(sceKernelCallWithChangeStack)
BRIDGE_DECL(sceKernelCancelEvent)
BRIDGE_DECL(sceKernelCancelEventFlag)
BRIDGE_DECL(sceKernelCancelEventWithSetPattern)
BRIDGE_DECL(sceKernelCancelMsgPipe)
BRIDGE_DECL(sceKernelCancelMutex)
BRIDGE_DECL(sceKernelCancelRWLock)
BRIDGE_DECL(sceKernelCancelSema)
BRIDGE_DECL(sceKernelCancelTimer)
BRIDGE_DECL(sceKernelChangeCurrentThreadAttr)
BRIDGE_DECL(sceKernelCheckThreadStack)
BRIDGE_DECL(sceKernelCloseModule)
BRIDGE_DECL(sceKernelCreateCond)
BRIDGE_DECL(sceKernelCreateEventFlag)
BRIDGE_DECL(sceKernelCreateLwCond)
BRIDGE_DECL(sceKernelCreateLwMutex)
BRIDGE_DECL(sceKernelCreateMsgPipe)
BRIDGE_DECL(sceKernelCreateMsgPipeWithLR)
BRIDGE_DECL(sceKernelCreateMutex)
BRIDGE_DECL(sceKernelCreateRWLock)
BRIDGE_DECL(sceKernelCreateSema)
BRIDGE_DECL(sceKernelCreateSema_16XX)
BRIDGE_DECL(sceKernelCreateSimpleEvent)
BRIDGE_DECL(sceKernelCreateThread)
BRIDGE_DECL(sceKernelCreateTimer)
BRIDGE_DECL(sceKernelDeleteLwCond)
BRIDGE_DECL(sceKernelDeleteLwMutex)
BRIDGE_DECL(sceKernelExitProcess)
BRIDGE_DECL(sceKernelGetCallbackInfo)
BRIDGE_DECL(sceKernelGetCondInfo)
BRIDGE_DECL(sceKernelGetCurrentThreadVfpException)
BRIDGE_DECL(sceKernelGetEventFlagInfo)
BRIDGE_DECL(sceKernelGetEventInfo)
BRIDGE_DECL(sceKernelGetEventPattern)
BRIDGE_DECL(sceKernelGetLwCondInfo)
BRIDGE_DECL(sceKernelGetLwCondInfoById)
BRIDGE_DECL(sceKernelGetLwMutexInfo)
BRIDGE_DECL(sceKernelGetLwMutexInfoById)
BRIDGE_DECL(sceKernelGetModuleInfoByAddr)
BRIDGE_DECL(sceKernelGetMsgPipeInfo)
BRIDGE_DECL(sceKernelGetMutexInfo)
BRIDGE_DECL(sceKernelGetOpenPsId)
BRIDGE_DECL(sceKernelGetPMUSERENR)
BRIDGE_DECL(sceKernelGetProcessTime)
BRIDGE_DECL(sceKernelGetProcessTimeLow)
BRIDGE_DECL(sceKernelGetProcessTimeWide)
BRIDGE_DECL(sceKernelGetRWLockInfo)
BRIDGE_DECL(sceKernelGetSemaInfo)
BRIDGE_DECL(sceKernelGetSystemInfo)
BRIDGE_DECL(sceKernelGetSystemTime)
BRIDGE_DECL(sceKernelGetTLSAddr)
BRIDGE_DECL(sceKernelGetThreadContextForVM)
BRIDGE_DECL(sceKernelGetThreadCpuAffinityMask)
BRIDGE_DECL(sceKernelGetThreadCurrentPriority)
BRIDGE_DECL(sceKernelGetThreadEventInfo)
BRIDGE_DECL(sceKernelGetThreadExitStatus)
BRIDGE_DECL(sceKernelGetThreadId)
BRIDGE_DECL(sceKernelGetThreadInfo)
BRIDGE_DECL(sceKernelGetThreadRunStatus)
BRIDGE_DECL(sceKernelGetTimerBase)
BRIDGE_DECL(sceKernelGetTimerEventRemainingTime)
BRIDGE_DECL(sceKernelGetTimerInfo)
BRIDGE_DECL(sceKernelGetTimerTime)
BRIDGE_DECL(sceKernelLoadModule)
BRIDGE_DECL(sceKernelLoadStartModule)
BRIDGE_DECL(sceKernelLockLwMutex)
BRIDGE_DECL(sceKernelLockLwMutexCB)
BRIDGE_DECL(sceKernelLockMutex)
BRIDGE_DECL(sceKernelLockMutexCB)
BRIDGE_DECL(sceKernelLockReadRWLock)
BRIDGE_DECL(sceKernelLockReadRWLockCB)
BRIDGE_DECL(sceKernelLockWriteRWLock)
BRIDGE_DECL(sceKernelLockWriteRWLockCB)
BRIDGE_DECL(sceKernelOpenModule)
BRIDGE_DECL(sceKernelPMonThreadGetCounter)
BRIDGE_DECL(sceKernelPollEvent)
BRIDGE_DECL(sceKernelPollEventFlag)
BRIDGE_DECL(sceKernelPrintBacktrace)
BRIDGE_DECL(sceKernelPulseEventWithNotifyCallback)
BRIDGE_DECL(sceKernelReceiveMsgPipe)
BRIDGE_DECL(sceKernelReceiveMsgPipeCB)
BRIDGE_DECL(sceKernelReceiveMsgPipeVector)
BRIDGE_DECL(sceKernelReceiveMsgPipeVectorCB)
BRIDGE_DECL(sceKernelRegisterThreadEventHandler)
BRIDGE_DECL(sceKernelSendMsgPipe)
BRIDGE_DECL(sceKernelSendMsgPipeCB)
BRIDGE_DECL(sceKernelSendMsgPipeVector)
BRIDGE_DECL(sceKernelSendMsgPipeVectorCB)
BRIDGE_DECL(sceKernelSetEventWithNotifyCallback)
BRIDGE_DECL(sceKernelSetThreadContextForVM)
BRIDGE_DECL(sceKernelSetTimerEvent)
BRIDGE_DECL(sceKernelSetTimerTime)
BRIDGE_DECL(sceKernelSignalLwCond)
BRIDGE_DECL(sceKernelSignalLwCondAll)
BRIDGE_DECL(sceKernelSignalLwCondTo)
BRIDGE_DECL(sceKernelStackChkFail)
BRIDGE_DECL(sceKernelStartModule)
BRIDGE_DECL(sceKernelStartThread)
BRIDGE_DECL(sceKernelStopModule)
BRIDGE_DECL(sceKernelStopUnloadModule)
BRIDGE_DECL(sceKernelTryLockLwMutex)
BRIDGE_DECL(sceKernelTryReceiveMsgPipe)
BRIDGE_DECL(sceKernelTryReceiveMsgPipeVector)
BRIDGE_DECL(sceKernelTrySendMsgPipe)
BRIDGE_DECL(sceKernelTrySendMsgPipeVector)
BRIDGE_DECL(sceKernelUnloadModule)
BRIDGE_DECL(sceKernelUnlockLwMutex)
BRIDGE_DECL(sceKernelUnlockLwMutex2)
BRIDGE_DECL(sceKernelWaitCond)
BRIDGE_DECL(sceKernelWaitCondCB)
BRIDGE_DECL(sceKernelWaitEvent)
BRIDGE_DECL(sceKernelWaitEventCB)
BRIDGE_DECL(sceKernelWaitEventFlag)
BRIDGE_DECL(sceKernelWaitEventFlagCB)
BRIDGE_DECL(sceKernelWaitException)
BRIDGE_DECL(sceKernelWaitExceptionCB)
BRIDGE_DECL(sceKernelWaitLwCond)
BRIDGE_DECL(sceKernelWaitLwCondCB)
BRIDGE_DECL(sceKernelWaitMultipleEvents)
BRIDGE_DECL(sceKernelWaitMultipleEventsCB)
BRIDGE_DECL(sceKernelWaitSema)
BRIDGE_DECL(sceKernelWaitSemaCB)
BRIDGE_DECL(sceKernelWaitSignal)
BRIDGE_DECL(sceKernelWaitSignalCB)
BRIDGE_DECL(sceKernelWaitThreadEnd)
BRIDGE_DECL(sceKernelWaitThreadEndCB)
BRIDGE_DECL(sceSblACMgrIsGameProgram)
BRIDGE_DECL(sceSblGcAuthMgrAdhocBB160Shutdown)
BRIDGE_DECL(sceSblGcAuthMgrAdhocBB224Shutdown)
BRIDGE_DECL(sceSblGcAuthMgrMsSaveBBCipherFinal)
BRIDGE_DECL(sceSblGcAuthMgrMsSaveBBMacUpdate)
BRIDGE_DECL(sceSblGcAuthMgrPcactActivation)
