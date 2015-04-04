#include "board.h"

// class constructor
Board::Board()
{
}

// sets a point on the board to a blip
Board::setBlip(Location loc, Blip newBlip)
{
        grid[loc.y][loc.x] = newBlip;
        newBlip.setLoc(loc);
        if (grid[loc.y][loc.x] == newBlip)
        {
            return 1
        }
        else
        {
            return 0
        }    
}

// clears the blip at a location
Board::clearBlip(Location loc)
{
}

// class destructor
Board::~Board()
{
}
