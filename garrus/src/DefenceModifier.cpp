#include "DefenceModifier.h"

DefenceModifier::DefenceModifier() {
abilityName = "[3] Defence Boost";
changeValue = 20;
}

DefenceModifier::~DefenceModifier() {
}

int DefenceModifier::useAbility() {
return changeValue;
}
