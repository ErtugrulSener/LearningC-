#include "../Utils/StdAfx.h"

void PrintName(std::string&& name)
{

}

void PrintName(const std::string& name)
{

}

int main()
{
	std::string firstName = "Ertugrul";
	std::string lastName = "Sener";

	std::string fullName = firstName + lastName;
	PrintName(firstName + lastName);
	PrintName(firstName);
	return EXIT_SUCCESS;
}