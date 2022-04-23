#ifndef DRAGONSDUNGEON_H_INCLUDED
#define DRAGONSDUNGEON_H_INCLUDED
#include "Location.h"
class DragonsDungeon : public Location {
 public:
  DragonsDungeon();
  ~DragonsDungeon();
  virtual int travel();
};
#endif //DRAGONSDUNGEON_H_INCLUDED
