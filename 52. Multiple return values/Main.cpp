#include "../Utils/StdAfx.h"

struct Test
{
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};

Test func()
{
	Test t;
	t.x = 4.0f;
	return t;
}

int main()
{
	Test t = func();

	LOG(t.x);

	return EXIT_SUCCESS;
}