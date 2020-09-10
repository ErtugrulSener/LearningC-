#include "../Utils/StdAfx.h"

void PrintString(const std::string& string)
{
	LOG(string);
}

int main()
{
	// C Style way
	const char* name = "Cherno";
	char name2[6 + 1] = { 'C', 'h', 'e', 'r', 'n', 'o', 0x0};
	LOG(name2);

	for (int i = 0; i < 6; ++i)
	{
		LOG(name2[i]);
	}

	LOG("hey " + std::to_string(1));

	// C++ way
	std::string strTest = "Cherno";
	std::cout << strTest << std::endl;
	std::string str2 = std::string("Cherno ") + "Hello";
	bool bContains = str2.find("no") != std::string::npos;
	LOG(bContains);

	std::string a = std::string("Hello world");
	PrintString(a);
	return EXIT_SUCCESS;
}