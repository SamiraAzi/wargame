#ifndef STARTINGROOM_H_INCLUDED
#define STARTINGROOM_H_INCLUDED
#include "Location.h"

class StartingRoom : public Location {
 public:
  StartingRoom();
  ~StartingRoom();
  virtual int travel();
};
#endif // STARTINGROOM_H_INCLUDED
