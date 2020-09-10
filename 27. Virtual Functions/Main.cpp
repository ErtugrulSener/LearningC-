#include "../Utils/StdAfx.h"

class Entity
{
public:
	Entity() = default;
	~Entity() = default;

	virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
public:
	Player() = default;
	~Player() = default;

	std::string GetName() override { return "Player"; }
};

int main()
{
	Player* a = new Player();
	LOG(a->GetName());

	Entity* b = new Entity();
	LOG(b->GetName());

	Player* c = reinterpret_cast<Player *>(b);
	LOG(c->GetName());
	return EXIT_SUCCESS;
}