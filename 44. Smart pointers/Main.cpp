#include "../Utils/StdAfx.h"

class Entity
{
public:
	Entity() {
		LOG("Created Entity"); 
	};

	~Entity()
	{
		LOG("Destroyed Entity");
	}
};

void GetPointer(const std::unique_ptr<Entity> ptr) // Not possible
{
}

int main()
{
	{
		std::weak_ptr<Entity> e0;

		{
			 //std::unique_ptr<Entity> scopedPtr = std::make_unique<Entity>();
			// std::unique_ptr<Entity> ptr2 = scopedPtr; // Not copiable, so it can't be passed to a function

			// std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			// e0 = sharedEntity;
		}
	}
	return EXIT_SUCCESS;
}