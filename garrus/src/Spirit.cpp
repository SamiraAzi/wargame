#include "Spirit.h"
#include "BasicAttack.h"
#include "SpecialAttack.h"

Spirit::Spirit() {
className = "Spirit";
strength = 30;
defence = 10;
intelligence = 10;
//adding abilities to warrior
BasicAttack* b = new BasicAttack;
SpecialAttack* s = new SpecialAttack;
abilities.push_back(b);
abilities.push_back(s);
}

Spirit::~Spirit() {
}
