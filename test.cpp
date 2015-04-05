#include "blip.h"
#include "board.h"

using namespace std;

int main()
{
  Board board = Board();
  Location someLoc = someLoc(1,2);
  Blip someBlip = Blip(someLoc);
  board.setBlip(someLoc, someBlip);
  someBlip = board.getBlip(someLoc);
}
