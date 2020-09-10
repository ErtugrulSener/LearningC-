#include "../Utils/StdAfx.h"

class Entity
{
public:
	Entity() {};
	const int number = 4;
};

int main()
{
	Entity* e = new Entity();
	LOG(e->number);
	delete e;
};