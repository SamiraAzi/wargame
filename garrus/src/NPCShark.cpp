#include "NPCShark.h"
#include <string>

NPCShark::NPCShark(std::string nameParam, CharacterClass* characterClass) {
setName(nameParam);
setLevel(3);
setHealth(500 + (getLevel() * 100));
setHealthMax(500 + (getLevel() * 100));
setGold(0);
setFriendly(false);
setShop(false);
setCharacterClass(characterClass);
}

NPCShark::~NPCShark() {
}
