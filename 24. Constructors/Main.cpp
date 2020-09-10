#include "../Utils/StdAfx.h"

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;

		LOG("Created entity!");
	}

	~Entity()
	{
		LOG("Destroyed entity!");
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

int main()
{
	Entity e;
	e.Print();
	return EXIT_SUCCESS;
}