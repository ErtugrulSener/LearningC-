#include "../Utils/StdAfx.h"
#include "Player.h"

Player::Player()
{
	m_iX = 0;
	m_iY = 0;
	m_iSpeed = 777;
}

Player::~Player()
{

}

void Player::Move(int xa, int ya, int speed)
{
	m_iX += xa * speed;
	m_iY += ya * speed;
}
