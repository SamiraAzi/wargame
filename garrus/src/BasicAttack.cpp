#include "BasicAttack.h"

BasicAttack::BasicAttack() {
abilityName = "[1] Basic Attack";
changeValue = 100;
}

BasicAttack::~BasicAttack() {
}

int BasicAttack::useAbility() {
return changeValue;
}
