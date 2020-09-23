#include "../Utils/StdAfx.h"

static uint32_t s_AllocCount = 0;

void* operator new(size_t size)
{
	s_AllocCount++;
	LOG("Allocated " << size << " Bytes");
	return malloc(size);
}

void PrintName(const std::string_view name)
{
	LOG(name);
}

int main()
{
	const char* name = "Ertugrul Sener";
	std::string_view firstName(name, 9);
	std::string_view lastName(name + 9, 5);

	PrintName(firstName);
	PrintName(lastName);

	LOG(s_AllocCount << " allocations");
	return EXIT_SUCCESS;
}