#include "GoldenGlacier.h"
#include "Animal.h"
#include "NPCWalrus.h"
#include "ItemWalrusTusk.h"

GoldenGlacier::GoldenGlacier() {
    locationName = "Golden Glacier";
Animal* a = new Animal();
NPCWalrus* x = new NPCWalrus("Walrus", a);
inhabitants.push_back(x);

ItemWalrusTusk* wt = new ItemWalrusTusk();
chest.push_back(wt);
puzzleQuestion = "Spell glacier backwards";
puzzleAnswer = "reicalg";
}
GoldenGlacier::~GoldenGlacier() {
}

int GoldenGlacier::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Lions Lair" << std::endl;
std::cout << "2: Wailing Waterfalls" << std::endl;
std::cout << "3: Dragons Dungeon" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
