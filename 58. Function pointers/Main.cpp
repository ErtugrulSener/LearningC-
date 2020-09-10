#include "../Utils/StdAfx.h"

void HelloWorld()
{
	LOG("Hello world!");
}

void Print(const uint16_t size, const std::vector<int>& vec)
{
	char buf[512];
	snprintf(buf, sizeof(buf), "The size is: %d", size);

	LOG(buf);

	LOG("The element's are:")
	for (const auto& v : vec)
	{
		LOG(v);
	}
}

int main()
{
	std::vector<int> vec{ 1, 2, 3, 4, 5 };

	void(*function)(const uint16_t, const std::vector<int>&) = Print;
	function(vec.size(), vec);

	return EXIT_SUCCESS;
}