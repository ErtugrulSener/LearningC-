#include "../Utils/StdAfx.h"

int main()
{
	std::vector<const char*> names = { "Ertugrul", "Cherno", "Ertu", "CC" };
	auto it  = std::find_if(names.begin(), names.end(), [](const char* name) { return strcmp(name, "Ertugrul") == 0; });
	LOG(*it);
	return EXIT_SUCCESS;
}