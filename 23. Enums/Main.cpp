#include "../Utils/StdAfx.h"

enum TEnum : unsigned char
{
	A = 0,
	B = 6,
	C = 9,
};

int main()
{
	// Enumeration -> Set of values

	TEnum value = A;

	if (value == B)
	{

	}

	LOG(A);
	LOG(B);
	LOG(C);

	return EXIT_SUCCESS;
}