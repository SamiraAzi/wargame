#include "Animal.h"
#include "BasicAttack.h"
#include "SpecialAttack.h"

Animal::Animal() {
className = "Animal";
strength = 20;
defence = 20;
intelligence = 5;
BasicAttack* b = new BasicAttack;
SpecialAttack* s = new SpecialAttack;
abilities.push_back(b);
abilities.push_back(s);
}

Animal::~Animal() {
}
