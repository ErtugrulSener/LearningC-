#include "../Utils/StdAfx.h"

class Printable
{
public:
	virtual void PrintName() = 0;
};

class Entity : public Printable
{
public:
	Entity() = default;
	~Entity() = default;

	void PrintName() override { LOG("Entity"); };
};

class Player : public Entity
{
public:
	Player() = default;
	~Player() = default;

	void PrintName() override { LOG("Player"); }
};

void PrintPrintableName(Printable& p)
{
	p.PrintName();
}

int main()
{
	Entity a;
	PrintPrintableName(a);

	return EXIT_SUCCESS;
}