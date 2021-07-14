#pragma once
#include "Player.h"

class Computerplayer :
    public Player
{
public:
    virtual void SetShips() override;
    virtual Coord Round()override;
    Computerplayer() : Player() {};
};

