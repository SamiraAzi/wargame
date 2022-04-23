#ifndef DEFENCEMODIFIER_H_INCLUDED
#define DEFENCEMODIFIER_H_INCLUDED
#include "Modifier.h"
class DefenceModifier: public Modifier {
 public:
  DefenceModifier();
  ~DefenceModifier();
  int useAbility();
};
#endif //DEFENCEMODIFIER_H_INCLUDED
