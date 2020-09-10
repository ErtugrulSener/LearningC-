#include "../Utils/StdAfx.h"

int main()
{
	std::vector<int> values = { 3, 4, 1, 5, 9, 2 };
	std::sort(values.begin(), values.end(), [](int a, int b)
		{
			if (a == 1)
				return false;

		if (b == 1)
			return true;

		return a < b;
	});

	for (const auto& p : values)
	{
		LOG(p);
	}

	return EXIT_SUCCESS;
}