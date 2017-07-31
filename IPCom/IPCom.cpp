// IPCom.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "IPCom.h"

#include <cstdio>


// This is an example of an exported variable
IPCOM_API int nIPCom=0;

// This is an example of an exported function.
IPCOM_API int fnIPCom(void)
{
	printf("lel");

    return 42;
}

// This is the constructor of a class that has been exported.
// see IPCom.h for the class definition
CIPCom::CIPCom()
{
    return;
}
