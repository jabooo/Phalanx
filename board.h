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
             // clears the blip at a location
             int clearBlip(Location target);       
             
      private :
             std::vector<std::vector<Blip*> > grid;
};

#endif
