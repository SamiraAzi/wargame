#ifndef SPECIALATTACK_H_INCLUDED
#define SPECIALATTACK_H_INCLUDED
#include "Attack.h"
class SpecialAttack: public Attack {
 public:
  SpecialAttack();
  ~SpecialAttack();
  int useAbility();
};
#endif // SPECIALATTACK_H_INCLUDED
