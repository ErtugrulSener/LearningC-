#include "../Utils/StdAfx.h"

static int s_iLevel = 4;
static int s_iSpeed = 2;

int main()
{
	s_iSpeed = (s_iLevel > 5) ? (s_iLevel > 15) ? 10 : 5 : 6;

	std::string rank = s_iLevel > 10 ? "Master" : "Beginner";
	LOG(s_iSpeed);
}