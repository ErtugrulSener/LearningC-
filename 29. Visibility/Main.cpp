#include "../Utils/StdAfx.h"

class Entity
{
public:
	int X, Y;
	void Print() {};

	Entity()
	{
		X = 0;
		Print();
	}
};

class Player : public Entity
{
public:
	Player()
	{
		X = 0;
		Print();
	}
};

int main()
{
	Entity e;
	e.Print();

	return EXIT_SUCCESS;
}