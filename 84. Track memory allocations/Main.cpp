#include "../Utils/StdAfx.h"

struct AllocationMetrics
{
	uint32_t TotalAllocated = 0;
	uint32_t TotalFreed = 0;

	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed;  }
};

void* operator new(size_t size)
{
	LOG("Allocated: " << size << " bytes");
	return malloc(size);
}

void operator delete(void* memory, size_t size)
{
	LOG("Freeing: " << size << " bytes");
	free(memory);
}

struct Object
{
	int x, y, z;
};

int main()
{
	{
		std::unique_ptr<Object> obj = std::make_unique<Object>();
	}

	return EXIT_SUCCESS;
}