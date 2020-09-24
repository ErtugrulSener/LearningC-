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
	Entity e("Ertugrul");

	return EXIT_SUCCESS;
}