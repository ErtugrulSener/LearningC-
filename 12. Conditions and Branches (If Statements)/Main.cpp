#include "../Utils/StdAfx.h"
#include "Conditions.h"

using namespace learning;

int main()
{
	const int x = 5;

	bool bComparison = x == 5;
	if (bComparison == true)
	{
		std::cout << "x is 5" << std::endl;
	}

	// Will be optimized to
	// std::cout << "x is 5" << std::endl;

	return 1;
}