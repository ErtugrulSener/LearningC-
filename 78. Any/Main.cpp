#include "../Utils/StdAfx.h"

int main()
{
	std::any a = 4;

	int32_t& bb = std::any_cast<int32_t&>(a);
	LOG(bb);
	return EXIT_SUCCESS;
}