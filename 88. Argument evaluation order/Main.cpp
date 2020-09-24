#include "../Utils/StdAfx.h"

int32_t a = 2;

void func(int32_t a, int32_t b, int32_t c)
{
	LOG(a << " " << b << " " << c);
}

int main()
{
	// Undefined behaviour unless you use -std=c++17 flag
	func(a--, a++, a++);
	LOG(a);
	return EXIT_SUCCESS;
}