// Class automatically generated by Dev-C++ New Class wizard

#ifndef GRID_H
#define GRID_H
#include <vector>
#include "blip.h"
#include "location.h"

class Grid
{
        std::vector<std::vector<Blip*>> grid;
	public:
        // dimensions of board
        int width;
        int height;
        
		// class constructor
		Grid(int length, int width);
		// class destructor
		~Grid();
		// sets a new target for a space
		void setBlip(Blip newBlip, Location loc);
		

};

#endif // GRID_H
