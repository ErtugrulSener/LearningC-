#include "../Utils/StdAfx.h"

std::tuple<int32_t, int32_t> func()
{
	return { 1, 2 };
}

int main()
{
	const auto&[a, b] = func();
	LOG(a);

	return EXIT_SUCCESS;
}