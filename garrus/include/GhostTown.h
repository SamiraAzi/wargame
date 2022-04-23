#ifndef GHOSTTOWN_H_INCLUDED
#define GHOSTTOWN_H_INCLUDED

#include "Location.h"
class GhostTown : public Location {
 public:
  GhostTown();
  ~GhostTown();
  virtual int travel();
};
#endif //GHOSTTOWN_H_INCLUDED
