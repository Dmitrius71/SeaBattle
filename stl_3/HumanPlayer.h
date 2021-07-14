#pragma once
#include "Player.h"
#include "ViewPort.h"

class HumanPlayer :
    public Player
{
public:

    HumanPlayer(std::string name) : Player(name){}
    virtual void SetShips() override;
    virtual Coord Round() override;    
};

