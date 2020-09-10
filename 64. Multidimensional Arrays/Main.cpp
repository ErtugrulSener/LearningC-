#include "../Utils/StdAfx.h"

int main()
{
	int** a2d = new int* [50];

	for (int i = 0; i < 50; ++i)
		a2d[i] = new int[50];

	for (int y = 0; y < 50; ++y)
		delete[] a2d[y];

	delete[] a2d;

	return EXIT_SUCCESS;
}