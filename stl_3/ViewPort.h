#pragma once
#include"Ship.h"
#include<string>


class ViewPort
{
public:
	Coord GetShipCoord();
	int GetShipSize();
	void ShowShips(int array[]);
	ShipDirection GetShipDerection();
	Coord GetShootCoord();
	std::string GetHumanNAme();
	void ShowMiss(std::string name);
	void ShowHIT(std::string name);
	void ShowKill(std::string name);
	void RaundStart(std::string name);
	void GameWin(std::string name);
};

