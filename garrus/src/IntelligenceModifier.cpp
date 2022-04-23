#include "IntelligenceModifier.h"

IntelligenceModifier::IntelligenceModifier() {
abilityName = "[3] Intelligence Boost";
changeValue = 20;
}

IntelligenceModifier::~IntelligenceModifier() {
}

int IntelligenceModifier::useAbility() {
return changeValue;
}
