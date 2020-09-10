#include "../Utils/StdAfx.h"

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int b = 8;
	int* ref = &a;
	Increment(*ref);

	ref = &b;
	++(*ref);

	LOG(a);
	LOG(b);
	return EXIT_SUCCESS;
}