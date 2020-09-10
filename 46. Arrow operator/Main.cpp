#include "../Utils/StdAfx.h"

class Entity
{
public:
	void Print() const { std::cout << "Hello!" << std::endl; };

	int x;
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity * entity)
		: m_Obj(entity) {}

	const Entity* operator->() const
	{
		return m_Obj;
	}
};

int main()
{
	const ScopedPtr entity = new Entity();
	entity->Print();

	return EXIT_SUCCESS;
}