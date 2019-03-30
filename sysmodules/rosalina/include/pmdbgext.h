// License for this file: ctrulib's license
// Copyright AuroraWright, TuxSH 2019

#pragma once

#include <3ds/services/pmapp.h>

Result PMDBG_GetCurrentAppTitleId(u64 *outTitleId);
Result PMDBG_DebugNextApplicationByForce(void);
Result PMDBG_LaunchTitleDebug(Handle *outDebug, const FS_ProgramInfo *programInfo, u32 launchFlags);
