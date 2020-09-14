#include "../Utils/StdAfx.h"

class Entity
{
public:
	virtual void PrintName() {};

	Entity() = default;
	~Entity() = default;
};

class Player : public Entity
{

};

class Enemy : public Entity
{

};

int main()
{
	// only works with rtti => Run Rime Type Informations
	Player* player = new Player();
	Entity* actuallyPlayer = player;
	Entity* actuallyEnemy = new Enemy();

	Player* p = dynamic_cast<Player*>(actuallyPlayer);

	if (p)
		LOG("Success!");

	return EXIT_SUCCESS;
}