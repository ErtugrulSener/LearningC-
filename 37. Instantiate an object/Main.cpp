#include "../Utils/StdAfx.h"

class Entity
{
public:
	Entity() {
		LOG("Creating Entity");
	}

	~Entity() {
		LOG("Destroying Entity");
	}

	int_fast64_t a;
};

int main()
{
	Entity* e = new Entity();
	delete e;
};