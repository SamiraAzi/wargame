#include "Warrior.h"
#include "BasicAttack.h"
#include "SpecialAttack.h"
#include "StrengthModifier.h"

Warrior::Warrior() {
className = "Warrior";
strength = 50;
defence = 10;
intelligence = 10;
//adding abilities to warrior
BasicAttack* b = new BasicAttack;
SpecialAttack* s = new SpecialAttack;
StrengthModifier* sm = new StrengthModifier;
abilities.push_back(b);
abilities.push_back(s);
abilities.push_back(sm);
}

Warrior::~Warrior() {
}
