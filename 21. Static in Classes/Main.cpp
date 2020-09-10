#include "../Utils/StdAfx.h"
#include "Static.h"

int main()
{
	StaticTest::i = 7;

	LOG(StaticTest::GetStatic());
	return EXIT_SUCCESS;
}