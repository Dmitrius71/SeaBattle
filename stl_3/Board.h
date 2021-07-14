#pragma once
#include<array>
#include "Cell.h"
#include<vector>
#include "Ship.h"

enum class ShootState  //перечисление
{
	MISS,
	HIT,
	KILL
};

class Board
{
	using cellarray = std::array <std::array<Cell, 10>, 10>;
	cellarray board;
	std::vector<Ship*> ships;
	
public:
	Board();
	bool AddShip(int row, int col, int size, ShipDirection direction);
	ShootState ShootCheck(int row, int col);
	const cellarray& GetBoard();
	void Statusrestart();
	bool ShipsCheck();
};

