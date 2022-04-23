#ifndef WAILINGWATERFALLS_H_INCLUDED
#define WAILINGWATERFALLS_H_INCLUDED
#include "Location.h"
class WailingWaterfalls : public Location {
 public:
  WailingWaterfalls();
  ~WailingWaterfalls();
  virtual int travel();
};
#endif // WAILINGWATERFALLS_H_INCLUDED
