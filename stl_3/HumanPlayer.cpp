#include "HumanPlayer.h"
#include "ViewPort.h"

void HumanPlayer::SetShips()
{
	int shipSize[5]{ 0,4,3,2,1 };
	
	Coord coord;
	ViewPort view;
	while (true)
	{
		view.ShowShips(shipSize);

		int currsize;
		ShipDirection direction;

		do {
		    currsize = view.GetShipSize();
			if (shipSize[currsize] > 0)
			{
				shipSize[currsize]--;
				break;
			}
		} while (true);

		direction = view.GetShipDerection();

		do
		{
			 coord = view.GetShipCoord();
		} while (board.AddShip(coord.row, coord.col, currsize, direction));


		int zero{};
		for (size_t i = 1; i < 5; i++)
		{
			zero += shipSize[i];
		}
		
		if (zero == 0)
			break;
	}
}

Coord HumanPlayer::Round()
{
	ViewPort view;
	Coord coord;

	coord=view.GetShootCoord();

	return coord;

}
