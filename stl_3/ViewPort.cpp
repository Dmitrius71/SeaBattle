#include "ViewPort.h"
#include <iostream>
#include <string>


Coord ViewPort::GetShipCoord()
{
	Coord coord;
	std::cout << "Input coordinate of Ship\n";
	std::cout << "Input Row: ";
	std::cin >> coord.row;
	std::cout << "Input Col: ";
	std::cin >> coord.col;
	return coord;
}

int ViewPort::GetShipSize()
{
	int shipSize;
	std::cout << "Input Size of ship : ";
	std::cin >> shipSize;
	return shipSize;
}

void ViewPort::ShowShips(int array[])
{
	for (size_t i = 1; i < 5; i++)
	{
		std::cout << "SHip at size = " << i << "is = " << array[i] << "\n";
	}
}

ShipDirection ViewPort::GetShipDerection()
{
	int direction;
	std::cout << " Input DIRECTION of ship: \n 1-Horizontal\n2-Vertical\nDirection: ";
	std::cin >> direction;
	return (direction == 1) ? ShipDirection::HORIZONTAL : ShipDirection::VERTICAL;
}

Coord ViewPort::GetShootCoord()
{
	Coord coord;

	std::cout << "Input coordinate of Shoot\n";
	std::cout << "Input Row: ";
	std::cin >> coord.row;
	std::cout << "Input Col: ";
	std::cin >> coord.col;
	return coord;
}

std::string ViewPort::GetHumanNAme()
{
	std::string name;
	std::cout << "Input your name";
	std::cin >> name;
	return name;
}

void ViewPort::ShowMiss(std::string name)
{
	
	std::cout << name << "Miss\n";
		
		
}

void ViewPort::ShowHIT(std::string name)
{
	std::cout << name << "Hit\n";
}

void ViewPort::ShowKill(std::string name)
{
	std::cout << name << "Kill\n";
}

void ViewPort::RaundStart(std::string name)
{
	std::cout << "**************************************\n";
	std::cout << "Round for" << name << "\n";
	std::cout << "**************************************\n";
}

void ViewPort::GameWin(std::string name)
{
	std::cout << name << "Win\n";
}
