#include "Player.h"
#include "Character.h"
#include <string>

Player::Player() {
}

Player::~Player() {
}

Player::Player(std::string name, CharacterClass* characterClass) {
setName(name);
setLevel(10);
setHealth(500 + (getLevel() * 100));
setHealthMax(500 + (getLevel() * 100));
setGold(0);
setCharacterClass(characterClass);
setDamage(100 + (getLevel() * 20));
setIsHuman(true);
}
