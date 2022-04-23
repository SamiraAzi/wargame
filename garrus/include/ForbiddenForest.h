#ifndef FORBIDDENFOREST_H_INCLUDED
#define FORBIDDENFOREST_H_INCLUDED
#include "Location.h"
class ForbiddenForest : public Location {
 public:
ForbiddenForest();
~ForbiddenForest();
virtual int travel();
};
#endif //FORBIDDENFOREST_H_INCLUDED
