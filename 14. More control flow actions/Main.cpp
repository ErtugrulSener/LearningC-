#include "../Utils/StdAfx.h"

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		if (i == 0)
			break;

		std::cout << "i: " << i << " Hello world! " << std::endl;
	}

	return EXIT_SUCCESS;
}