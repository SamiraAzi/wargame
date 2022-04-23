#include "Wizard.h"
#include "BasicAttack.h"
#include "SpecialAttack.h"
#include "IntelligenceModifier.h"

Wizard::Wizard() {
className = "Wizard";
strength = 10;
defence = 10;
intelligence = 50;

//adding abilities to warrior
BasicAttack* b = new BasicAttack;
SpecialAttack* s = new SpecialAttack;
IntelligenceModifier* im = new IntelligenceModifier;
abilities.push_back(b);
abilities.push_back(s);
abilities.push_back(im);
}

Wizard::~Wizard() {
}
