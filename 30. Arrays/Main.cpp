#include "../Utils/StdAfx.h"

void func(std::array<int, 5> &arr)
{
	LOG(arr.front());
}

int main()
{
	const int size = 5;
	int a[size];
	int count = sizeof(a) / sizeof(int); // 20 Bytes / 4 Bytes = 5

	int* example = new int[size];

	std::array<int, 5> another;
	another.fill(0);

	for (const auto& p : another)
	{
		LOG(p);
	}

	return EXIT_SUCCESS;
}