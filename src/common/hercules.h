// Copyright (c) Hercules Dev Team, licensed under GNU GPL.
// See the LICENSE file
// Base author: Haru <haru@dotalux.com>

#ifndef COMMON_HERCULES_H
#define COMMON_HERCULES_H

#include "config/core.h"
#include "common/cbasetypes.h"

#ifdef HERCULES_CORE
#define HExport extern
#else // !HERCULES_CORE
#define HExport static
#include "common/HPMi.h"
#endif // HERCULES_CORE

#endif // COMMON_HERCULES_H
