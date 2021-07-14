#include "Ship.h"

int Ship::Size()
{
    return size;
}

ShipDirection Ship::Direction()
{
    return direction;
}

int& Ship::Row()
{
    return row;
}

int& Ship::Col()
{
    return col;
}

int& Ship::GoodCells()
{
    return goodcells;
}

bool Ship::isLive()
{
    return goodcells !=0;
}
