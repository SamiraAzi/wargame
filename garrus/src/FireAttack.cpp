#include "FireAttack.h"

FireAttack::FireAttack() {
abilityName = "[1] Fire Attack";
changeValue = 500;
}

FireAttack::~FireAttack() {
}

int FireAttack::useAbility() {
return changeValue;
}
