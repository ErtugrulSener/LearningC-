#include "../Utils/StdAfx.h"

class Entity
{
public:
	Entity(Entity* e) : m_Ptr(e) {
		LOG("Created Entity with extended constructor");
	}
	Entity() {
		LOG("Created Entity with default constructor"); 
	};

	~Entity()
	{
		LOG("Destroyed Entity");
		delete m_Ptr;
	}

private:
	Entity *m_Ptr;
};

int main()
{
	{
		Entity e(new Entity());
	}

	return EXIT_SUCCESS;
}