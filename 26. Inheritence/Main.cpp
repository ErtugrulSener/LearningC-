#include "../Utils/StdAfx.h"

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity
{
public:
	const char* Name = "";

	void PrintName()
	{
		LOG(Name);
	}
};

int main()
{
	Player p;
	p.Name = "abc";
	p.PrintName();
	return EXIT_SUCCESS;
}