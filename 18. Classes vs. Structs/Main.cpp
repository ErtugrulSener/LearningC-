#include "../Utils/StdAfx.h"
#include "Player.h"

struct Vec2
{
	float x, y;
};

int main()
{
	Vec2 v;
	v.x, v.y = 4, 5;

	Player p1;
	p1.Move(1, 2, 3);

	return EXIT_SUCCESS;
}
