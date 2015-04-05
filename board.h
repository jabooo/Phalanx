#ifndef BOARD_H
#define BOARD_H
#include "location.h"
#include "blip.h"
#include <vector>

class Board
{
      public :
             // class constructor
             Board();
             // class destructor
             ~Board();
             // sets a point on the board to a blip
             int setBlip(Location target, Blip newBlip);
             // returns the blip at a location
             Blip getBlip(Location loc);
             // clears the blip at a location
             int clearBlip(Location target);     
             // moves a blip to another location
             int moveBlip (Location target, Blip targetBlip);
             // switches the blips of two locations
             int flip(Location loc1, Location loc2);  
             // switches the locations of two blips
             int flip(Blip blip1, Blip blip2);
             
      private :
             std::vector<std::vector<Blip*> > grid;
};

#endif
