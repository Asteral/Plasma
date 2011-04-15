/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011  Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/
#include "hsConfig.h"

#if HS_BUILD_FOR_WIN32

#ifndef __AFX_H__   // MFC apps won't let us include windows from here. =(
#ifndef _WIN32_WINNT
#define _WIN32_WINNT    0x0400
#endif  // _WIN32_WINNT

#ifndef MAXPLUGINCODE
#include <WinSock2.h>
#endif // MAXPLUGINCODE

#include <Windows.h>
#endif  // __AFX_H__

#endif // HS_BUILD_FOR_WIN32