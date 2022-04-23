#include "Tank.h"
#include "BasicAttack.h"
#include "SpecialAttack.h"
#include "DefenceModifier.h"

Tank::Tank() {
className = "Tank";
strength = 10;
defence = 50;
intelligence = 10;

//adding abilities to warrior
BasicAttack* b = new BasicAttack;
SpecialAttack* s = new SpecialAttack;
DefenceModifier* dm = new DefenceModifier;
abilities.push_back(b);
abilities.push_back(s);
abilities.push_back(dm);
}

Tank::~Tank() {
}
