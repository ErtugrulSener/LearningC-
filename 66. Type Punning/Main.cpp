#include "../Utils/StdAfx.h"

struct Entity
{
	int32_t x;
	double y;
};

int main()
{
	int32_t a = 4;
	double b = *(double *)&a;
	memset((double*)&b, 0, 8);

	b = 5.5;
	LOG(b);

	Entity e { 1, 2.2 };
	LOG(e.y);
	int32_t* arr = (int32_t*)&e;

	LOG(*arr++);
	double &y = *(double*)&arr;
	LOG(y);

	return EXIT_SUCCESS;
}