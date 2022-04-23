#ifndef BARRENDESERT_H_INCLUDED
#define BARRENDESERT_H_INCLUDED
#include "Location.h"

class BarrenDesert : public Location {
 public:
  BarrenDesert();
  ~BarrenDesert();
  virtual int travel();
};
#endif //BARRENDESERT_H_INCLUDED
