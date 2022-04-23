#include "MysticalCreature.h"
#include "FireAttack.h"

MysticalCreature::MysticalCreature() {
className = "Mystical Creature";
strength = 40;
defence = 40;
intelligence = 10;
FireAttack* f = new FireAttack();
abilities.push_back(f);
}

MysticalCreature::~MysticalCreature() {
}
