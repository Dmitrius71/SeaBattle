#include "Player.h"

Player::Player(std::string name)
{
	this->name = name;

}

bool Player::GameCheck()
{
	return board.ShipsCheck();
}

ShootState Player::ShootCheck(Coord coord)  //proverca vistrela
{
	return board.ShootCheck(coord.row, coord.col);
}

std::string Player::Name()
{
	return this->name;
}
