#include "../Utils/StdAfx.h"

enum Errors
{

};

int main()
{
	std::variant<std::string, int32_t> data;
	data = "Cherno";
	data = 2;

	if (auto value = std::get_if<std::string>(&data))
	{

	}
	return EXIT_SUCCESS;
}