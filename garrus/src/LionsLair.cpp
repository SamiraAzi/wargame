#include "LionsLair.h"
#include "Animal.h"
#include "NPCLion.h"
#include "ItemLionMane.h"

LionsLair::LionsLair() {
locationName = "Lions Lair";
Animal* a = new Animal();
NPCLion* x = new NPCLion("Lion", a);
inhabitants.push_back(x);

ItemLionMane* lm = new ItemLionMane();
chest.push_back(lm);
puzzleQuestion = "What creature lives at this location?";
puzzleAnswer = "lion";
}

LionsLair::~LionsLair() {
}

int LionsLair::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Ghost Town" << std::endl;
std::cout << "2: Golden Glacier" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
