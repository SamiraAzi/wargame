#ifndef WOLFMOUNTAIN_H_INCLUDED
#define WOLFMOUNTAIN_H_INCLUDED

#include "Location.h"
class WolfMountain : public Location {
 public:
  WolfMountain();
  ~WolfMountain();
  virtual int travel();
};
#endif // WOLFMOUNTAIN_H_INCLUDED
