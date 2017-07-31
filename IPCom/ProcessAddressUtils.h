#pragma once

#include <Windows.h>
#include <tlhelp32.h>
#include <tchar.h>
#include "stdafx.h"
#include "IPCom.h"

extern "C" DWORD_PTR dwGetModuleBaseAddress(DWORD dwProcID, TCHAR *szModuleName);
extern "C" void callModuleOffset(DWORD dwProcID, TCHAR *szModuleName, DWORD offset);
extern "C" DWORD getcaaddr();