#pragma once

class Player
{
public:
	Player();
	~Player();

	int m_iX;
	int m_iY;
	int m_iSpeed;

	void Move(int xa, int ya, int speed);
};
