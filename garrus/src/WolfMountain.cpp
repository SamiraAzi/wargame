#include "WolfMountain.h"
#include "Animal.h"
#include "NPCWolf.h"
#include "ItemWolfTooth.h"

WolfMountain::WolfMountain() {
locationName = "Wolf Mountain";
Animal* a = new Animal();
NPCWolf* x = new NPCWolf("Wolf", a);
inhabitants.push_back(x);

ItemWolfTooth* wt = new ItemWolfTooth();
chest.push_back(wt);
puzzleQuestion = "A domesticated descendant of the wolf";
puzzleAnswer = "dog";
}

WolfMountain::~WolfMountain() {
}

int WolfMountain::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Forbidden Forest" << std::endl;
std::cout << "2: Barren Dessert" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
