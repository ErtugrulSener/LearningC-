#include "../Utils/StdAfx.h"

int main()
{
	// That video was more like an open discussion.
	// Smart pointers vs. raw pointers
	int* b = new int;
	*b = 5;

	LOG(b);
	LOG(*b);

	delete b;

	std::unique_ptr<int> a = std::make_unique<int>(5);

	LOG(a);
	LOG(*(int*)&(*a));

	return EXIT_SUCCESS;
}