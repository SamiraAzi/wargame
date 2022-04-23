#include "NPCScorpion.h"
#include <string>

NPCScorpion::NPCScorpion(std::string nameParam,
CharacterClass* characterClass) {
setName(nameParam);
setLevel(4);
setHealth(500 + (getLevel() * 100));
setHealthMax(500 + (getLevel() * 100));
setGold(0);
setFriendly(false);
setShop(false);
setCharacterClass(characterClass);
}

NPCScorpion::~NPCScorpion() {
}
