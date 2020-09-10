#include "../Utils/StdAfx.h"

std::string GetName()
{
	return "Cherno";
}

int main()
{
	std::vector<std::string> strings;
	strings.emplace_back("Apple");
	strings.emplace_back("Orange");


	for (auto it = strings.begin(); it != strings.end(); ++it)
	{
		LOG(*it);
	}
}