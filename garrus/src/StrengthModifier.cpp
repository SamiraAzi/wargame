#include "StrengthModifier.h"

StrengthModifier::StrengthModifier() {
abilityName = "[3] Strength Boost";
changeValue = 20;
}

StrengthModifier::~StrengthModifier() {
}

int StrengthModifier::useAbility() {
return changeValue;
}
