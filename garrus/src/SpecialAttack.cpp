#include "SpecialAttack.h"

SpecialAttack::SpecialAttack() {
abilityName = "[2] Special Attack";
changeValue = 300;
}

SpecialAttack::~SpecialAttack() {
}

int SpecialAttack::useAbility() {
return changeValue;
}
