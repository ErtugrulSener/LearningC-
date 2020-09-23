#include "../Utils/StdAfx.h"

void* operator new(size_t size)
{
	LOG("Allocating " << size << " bytes!")
	return malloc(size);
}

int main()
{
	std::string name = "1111111111111111";
	return EXIT_SUCCESS;
}