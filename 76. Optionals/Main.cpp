#include "../Utils/StdAfx.h"

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);

	if (stream)
	{
		// read file
		std::string result;

		stream.close();
		return result;
	}

	return std::nullopt;
}

int main()
{
	std::optional<std::string> data = ReadFileAsString("data.txt");
	std::string value = data.value_or("Default val");

	if (!data)
	{
		LOG("File not found!");
		LOG(value);
	}
	else
	{
		LOG(data.value());
	}

	return EXIT_SUCCESS;
}