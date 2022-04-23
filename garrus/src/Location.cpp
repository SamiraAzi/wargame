#include "Location.h"
#include <algorithm>

void Location::removeInhabitants(NPC* inhabitant) {
inhabitants.erase(std::remove(inhabitants.begin(), inhabitants.end(),
 inhabitant), inhabitants.end());
}

void Location::printInhabitants() {
std::cout << "NPC's at this location\n";
int num = 1;
if (inhabitants.empty()) {
std::cout << "None\n";
}
for (NPC* i : inhabitants) {
std::cout << "[" << num << "]" << i->getName() << "\n";
num++;
}
}
Item* Location::openChest() {
std::cout << "==========\n";
std::cout << "Chest Contents\n";
std::cout << "==========\n";
int num = 1;
for (Item* i : chest) {
std::cout << "[" << num << "]" << i->getName() << "\n";
num++;
}
std::cout << "Which item would you like to pickup? Enter a single digit\n";
int choice;
std::cin >> choice;
int num2 = 1;
for (Item* i : chest) {
if (num2 == choice) {
std::cout << "Picked up " << i->getName() << std::endl;
std::cout <<"("<< i->getName() << " increases " << i->getStatType() << " by "
<< i->getIncreaseAmount() << ")\n";
chest.erase(chest.begin() + num2 - 1);
return i;
}
num2++;
}
return nullptr;
}
