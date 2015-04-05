#ifndef BOARD_H
#define BOARD_H
#include "location.h"
#include "blip.h"
#include <vector>
#include "player.h"

class Board
{
      public :
             // class constructor
             Board();
             // class destructor
             ~Board();
             
             
             ///////////////////
             //BLIP MANAGEMENT//
             ///////////////////
             // sets a point on the board to a blip
             int setBlip(Location target, Blip newBlip);
             // clears the blip at a location
             void clearBlip(Location target);     
             // moves a blip to another location
             void moveBlip (Location target, Blip targetBlip);
             // switches the blips of two locations
             void flip(Location loc1, Location loc2);  
             // switches the locations of two blips
             void flip(Blip blip1, Blip blip2);



             ///////////////////////
             //INFORMATION REQESTS//
             ///////////////////////
             // returns the blip at a location
             Blip getBlip(Location loc);             
             // checks whether a location is occupied
             bool isBlip(Location loc);            
             
             
             
             
             /////////////////////
             //PLAYER MANAGEMENT//
             /////////////////////
             // creates a player and adds it to the appropriate lists
             void newPlayer();
             // returns the player with the given id
             Player getPlayer(int id);
             
      private :
             std::vector<Player*> players;
             std::vector<std::vector<Blip*> > grid;
};

#endif
