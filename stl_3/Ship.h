#pragma once

struct Coord
{
	int row, col;
};

enum class ShipDirection
{
	HORIZONTAL,
	VERTICAL
};

class Ship
{
	int size;
	int goodcells;
	ShipDirection direction;
	int row, col;

public:

	Ship(int size, ShipDirection direrction) : size{ size }, direction{ direction }, goodcells{size}{}

	int Size();
	ShipDirection Direction();
	int& Row();
	int& Col();
	int& GoodCells();

	bool isLive();

	
};

