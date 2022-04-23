#ifndef BASICATTACK_H_INCLUDED
#define BASICATTACK_H_INCLUDED
#include "Attack.h"
class BasicAttack : public Attack {
 public:
  BasicAttack();
  ~BasicAttack();
  int useAbility();
};
#endif //BASICATTACK_H_INCLUDED
