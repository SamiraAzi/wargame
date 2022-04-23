#include "CharacterClass.h"

void CharacterClass::getAbilityNames() {
for (Ability* i : abilities)
std::cout << i->getAbilityName() << std::endl;
}
