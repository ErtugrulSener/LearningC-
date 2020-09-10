#include "../Utils/StdAfx.h"
#include "Player.h"

int main()
{
	Player* p1 = new Player();
	Player p2;

	LOG(p1->m_iSpeed);
	delete p1;

	return EXIT_SUCCESS;
}
