#include "../Utils/StdAfx.h"

#define _ITERATOR_DEBUG_LEVEL 0

template<typename T>
void PrintArrayElements(const T& arr)
{
	for (const auto& a : arr)
		LOG(a);
}

int main()
{
	std::array<int, 5> integers;
	integers.fill(1);

	PrintArrayElements(integers);

	// Some facts:
	// std::array is stored on the stack as a c style array too
	// std::array can check boundaries on an optional level, just define the macro _ITERATOR_DEBUG_LEVEL
	// In debug mode the macro _CONTAINER_DEBUG_LEVEL will be set automatically, so the check is done anyways
}