// Win32+NASM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "../IPCom/ProcessAddressUtils.h"

extern "C" int add(int a, int b); // cfuncsrc.asm

int main()
{
	//tocall(5);

	std::cout << add(2, 6) << std::endl;

	std::cout << getcaaddr() << std::endl;

	std::cin.get();

	return 0;
}

