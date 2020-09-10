#include "../Utils/StdAfx.h"

int main()
{
	int *arr = new int[5];
	memset(&arr[0], 0, 5 * sizeof(int));
	arr[4] = 5;

	for (int i = 0; i < 5; ++i)
	{
		std::stringstream ss("");
		ss << arr[i];
		LOG(ss.str().c_str());
	}

	delete[] arr;
	return EXIT_SUCCESS;
}