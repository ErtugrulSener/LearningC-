#pragma once

class Player
{
public:
	Player();
	~Player();

private:
	int m_iX;
	int m_iY;
	int m_iSpeed;

public:
	void Move(int xa, int ya, int speed);
};
