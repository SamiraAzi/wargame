#include "NPCWalrus.h"
#include <string>

NPCWalrus::NPCWalrus(std::string nameParam, CharacterClass* characterClass) {
setName(nameParam);
setLevel(2);
setHealth(500 + (getLevel() * 100));
setHealthMax(500 + (getLevel() * 100));
setGold(0);
setFriendly(false);
setShop(false);
setCharacterClass(characterClass);
}

NPCWalrus::~NPCWalrus() {
}
