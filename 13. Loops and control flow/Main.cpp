#include "../Utils/StdAfx.h"

struct T
{
	int i;
	char y;
} T;

int main()
{
	for (T.i = 0, T.y = 'a'; T.i < 5; ++T.y, ++T.i)
		std::cout << "Hello world! " << T.y << std::endl;

	std::cout << "==========================" << std::endl;

	int i = 0;
	while (i != 5)
	{
		LOG("Hello world!");
		++i;
	}

	std::cout << "==========================" << std::endl;

	int ii = 0;
	do
	{
		LOG("Hello World!");
		++ii;
	} while (ii < 5);

	return EXIT_SUCCESS;
}