#include "board.h"

// class constructor
Board::Board()
{
}

// class destructor
Board::~Board()
{
}

             ///////////////////
             //BLIP MANAGEMENT//
             ///////////////////
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
    grid[loc.y][loc.x] = null;
}

// moves a blip from one location to another
Board::moveBlip(Location targetLoc, Blip targetBlip)
{
    grid[targetBlip.getLoc().y][targetBlip.getLoc().x]=null;
    letBlip(targetLoc, targetBlip);
}

// switches the blips in two locations
Board::flip(Location loc1,Location loc2)
{
    Blip blip1;
    Blip blip2;
    blip1 = grid[loc1.y][loc1.x];
    blip2 = grid[loc2.y][loc2.x];
    setBlip(blip1,loc2);
    setBlip(blip2,loc1);
}

// switches the locations of two blips
Board::flip(Blip blip1,Blip blip1)
{
    Location loc1;
    Location loc2;
    loc1 = blip1.getLoc();
    loc2 = blip2.getLoc();
    setBlip(blip1,loc2);
    setBlip(blip2,loc1);
}

// checks whether a space is occupied
Board::isBlip(Location loc)
{
}

// returns the blip at a location
Board::getBlip(Location loc)
{
    return board[loc.y][loc.x];
}






             /////////////////////
             //PLAYER MANAGEMENT//
             /////////////////////

// creates a player and adds him to the appropriate lists
Board::newPlayer()
{
    Player() player;
    players[players::size] = player;
}

// returns the player with the given id
Board::getPlayer(int id)
{
    return players[id]
}

