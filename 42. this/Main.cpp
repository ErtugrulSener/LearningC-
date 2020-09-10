#include "../Utils/StdAfx.h"

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		Entity* const e = this;
		e->x = x;
		e->y = y;
	}

	int GetX() const
	{
		const Entity* const e = this;
		// e->x = 5;
		return x;
	}
};

struct PetTable
{
	int x, y;

	PetTable() = default;

	PetTable(int x, int y)
	{
		this->x = x;
		this->y = y;
	};
};

int main()
{
	std::map<int, PetTable> map;
	map[0] = PetTable(1, 1);

	PetTable p = map[0];
	map[0].x = 77;

	LOG(map[0].x);

	return EXIT_SUCCESS;
}