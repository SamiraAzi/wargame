#ifndef FIREATTACK_H_INCLUDED
#define FIREATTACK_H_INCLUDED
#include "Attack.h"
class FireAttack : public Attack {
 public:
  FireAttack();
  ~FireAttack();
  int useAbility();
};
#endif //FIREATTACK_H_INCLUDED
