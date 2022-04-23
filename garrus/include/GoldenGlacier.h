#ifndef GOLDENGLACIER_H_INCLUDED
#define GOLDENGLACIER_H_INCLUDED
#include "Location.h"
class GoldenGlacier : public Location {
 public:
  GoldenGlacier();
  ~GoldenGlacier();
  virtual int travel();
};
#endif //GOLDENGLACIER_H_INCLUDED
