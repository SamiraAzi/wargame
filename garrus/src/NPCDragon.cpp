#include "NPCDragon.h"
#include <string>

NPCDragon::NPCDragon(std::string nameParam, CharacterClass* characterClass) {
setName(nameParam);
setLevel(10);
setHealth(1000 + (getLevel() * 100));
setHealthMax(1000 + (getLevel() * 100));
setGold(0);
setFriendly(false);
setShop(false);
setCharacterClass(characterClass);
}

NPCDragon::~NPCDragon() {
}
