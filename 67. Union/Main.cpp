#include "../Utils/StdAfx.h"

union Entity
{
	int a, b, c, d;
};

int main()
{
	Entity e;
	e.a = 4;

	LOG(e.b);
	return EXIT_SUCCESS;
}