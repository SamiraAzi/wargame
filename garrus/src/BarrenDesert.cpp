#include "BarrenDesert.h"
#include "Animal.h"
#include "NPCScorpion.h"
#include "ItemScorpionArmor.h"

BarrenDesert::BarrenDesert() {
locationName = "Barren Desert";
Animal* a = new Animal();
NPCScorpion* x = new NPCScorpion("Scorpion", a);
inhabitants.push_back(x);

ItemScorpionArmor* sa = new ItemScorpionArmor();
chest.push_back(sa);
puzzleQuestion = "What one letter can you add to desert to make it sweet";
puzzleAnswer = "s";
}

BarrenDesert::~BarrenDesert() {
}

int BarrenDesert::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Wolf Mountain" << std::endl;
std::cout << "2: Wailing Waterfalls" << std::endl;
std::cout << "3: Dragons Dungeon" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
