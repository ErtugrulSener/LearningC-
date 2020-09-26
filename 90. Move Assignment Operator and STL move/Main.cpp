#include "../Utils/StdAfx.h"

class String
{
public:
	String() = default;

	String(const char* string)
	{
		LOG("Created");
	}

	String(const String& other)
	{
		LOG("Copied!");
	}

	String(String&& moved) noexcept
	{
		LOG("Moved!");
	}

	String& operator=(String&& other) noexcept
	{
		if (this != &other)
		{
			LOG("Moved with assignment")
			return other;
		}
	}

	~String()
	{
		LOG("Destroyed!");
	}
};

class Entity
{
public:
	Entity(String&& str) : m_data(std::move(str))
	{

	}
private:
	String m_data;
};

int main()
{
	String apple = "Apple";
	String dest;

	dest = std::move(apple);

	return EXIT_SUCCESS;
}