#pragma once
#include "Board.h"
#include<string>

class Player
{
protected:
	Board board;
	std::string name;

public:

	Player(std::string name = "Computer");
	virtual void SetShips()=0;
	virtual Coord Round()=0;
    bool GameCheck();
	ShootState ShootCheck(Coord coord);
	std::string Name();

};

