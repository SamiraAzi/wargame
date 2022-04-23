#ifndef STRENGTHMODIFIER_H_INCLUDED
#define STRENGTHMODIFIER_H_INCLUDED
#include "Modifier.h"
class StrengthModifier : public Modifier {
 public:
  StrengthModifier();
  ~StrengthModifier();
  int useAbility();
};
#endif // STRENGTHMODIFIER_H_INCLUDED
