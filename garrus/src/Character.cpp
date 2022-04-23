#include "Character.h"
#include <limits>
#include <algorithm>


void Character::init() {
level = 0;
}

void Character::addItem(Item* item) {
inventory.push_back(item);
if (item->getStatType().compare("Strength") == 0) {
characterClass->setStrength(characterClass->getStrength() +
item->getIncreaseAmount());
} else if (item->getStatType().compare("Defence") == 0) {
characterClass->setDefence(characterClass->getDefence() +
item->getIncreaseAmount());
} else if (item->getStatType().compare("Intelligence") == 0) {
characterClass->setIntelligence(characterClass->getIntelligence() +
item->getIncreaseAmount());
}
}

void Character::dropItem(Item* item) {
inventory.erase(std::remove(inventory.begin(), inventory.end(), item),
inventory.end());
if (item->getStatType().compare("Strength") == 0) {
characterClass->setStrength(characterClass->getStrength() -
item->getIncreaseAmount());
} else if (item->getStatType().compare("Defence") == 0) {
characterClass->setDefence(characterClass->getDefence() -
item->getIncreaseAmount());
} else if (item->getStatType().compare("Intelligence") == 0) {
characterClass->setIntelligence(characterClass->getIntelligence() -
item->getIncreaseAmount());
}
}

void Character::printCharacterClassStats(Character* character) {
std::cout << "Class: " << character->getCharacterClass()->getClassName()
<< std::endl;
std::cout << "Strength: " << character->characterClass->getStrength()
<< std::endl;
std::cout << "Defence: " << character->characterClass->getDefence()
<< std::endl;
std::cout << "Intelligence: " << character->characterClass->getIntelligence()
<< std::endl;
}

void Character::printCharacterInfo() {
std::cout << "-----Character Stats-----" << std::endl;
std::cout << "Name: " << this->getName() << std::endl;
std::cout << "Level: " << this->getLevel() << std::endl;
std::cout << "Health: " << this->getHealth() << "/" << this->healthMax
<< std::endl;
std::cout << "-----Class Stats-----" << std::endl;
printCharacterClassStats(this);
std::cout << "-----Abilities-----" << std::endl;
this->characterClass->getAbilityNames();
}

void Character::printInventory() {
int max = 5;
std::cout << "\n-Inventory-\n";
std::cout <<"(" << max-inventory.size() << "/" << max << ")"
<< " Space Available\n";
if (inventory.empty())
std::cout << "EMPTY\n";
int num = 1;
for (Item* i : inventory) {
std::cout << "[" << num << "]" << i->getName() << "(Increases " <<
i->getStatType() << " by " << i->getIncreaseAmount() << ")" << std::endl;
num++;
}
std::cout << "----------";
}

void Character::levelUp() {
level++;
healthMax = healthMax + 100;
health = healthMax;
std::cout << "----------\n";
std::cout << "----------\n";
std::cout << "You leveled up!" << std::endl;
std::cout << "Maximum health increased!" << std::endl;
std::cout << "You have been fully healed" << std::endl;
std::cout << "HP: " << health << "/" << healthMax <<  std::endl;
std::cout << "----------\n";
std::cout << "----------\n";
}

void Character::printBattleStats(Character* opponent) {
std::cout << "----------------------------------------------\n";
std::cout << name << " VS " << opponent->getName() << std::endl;
std::cout << "----------------------------------------------\n";
std::cout << "----------\n" << name << "'s Class Stats\n----------\n";
printCharacterClassStats(this);
std::cout << "----------\n" << opponent->getName()
<< "'s Class Stats\n----------\n";
printCharacterClassStats(opponent);
}
void Character::attack(Character* opponent) {
int dmg;
bool isAttack = false;
int choice;
if (this->isHuman == true) {
std::cout << "--Choose an ability--" << std::endl;
this->characterClass->getAbilityNames();
std::cin >> choice;
} else {
//NPC attack always chooses 1
choice = 1;
}
if (choice == 1) {
isAttack = true;
int attackDmg = characterClass->getStrength() +
characterClass->getAbilities().at(choice - 1)->getAbilityChangeValue();
int opponentDefence = opponent->characterClass->getDefence();
dmg = (attackDmg - opponentDefence);
if (dmg < 0) {
dmg = 0;
}
}
if (choice == 2) {
isAttack = true;
int specialDmg = characterClass->getIntelligence() +
characterClass->getAbilities().at(choice - 1)->getAbilityChangeValue();
int opponentDefence = opponent->characterClass->getDefence();
dmg = (specialDmg - opponentDefence);
if (dmg < 0) {
dmg = 0;
}
}
if (choice == 3) {
int mod = characterClass->getAbilities().at(choice - 1)
->getAbilityChangeValue();
if (characterClass->getClassName().compare("Warrior") == 0) {
characterClass->setStrength(characterClass->getStrength() + mod);
std::cout << "-------------\n";
std::cout << name << "'s " <<"strength increased by " << mod << "\n";
std::cout << "-------------\n";
} else if (characterClass->getClassName().compare("Tank") == 0) {
characterClass->setDefence(characterClass->getDefence() + mod);
std::cout << "-------------\n";
std::cout << name << "'s " << "defence increased by " << mod << "\n";
std::cout << "-------------\n";
} else if (characterClass->getClassName().compare("Wizard") == 0) {
characterClass->setIntelligence(characterClass->getIntelligence() + mod);
std::cout << "-------------\n";
std::cout << name << "'s " << "intelligence increased by " << mod << "\n";
std::cout << "-------------\n";
}
}
if (health > 0 && isAttack == true) {
opponent->setHealth(opponent->getHealth() - dmg);
std::cout << "-------------\n";
std::cout << name << " dealt " << dmg << " damage to  "
<< opponent->name << " with "
<< characterClass->getAbilities().at(choice - 1)->getAbilityName() << "\n";
std::cout << "-------------\n";
}
}
