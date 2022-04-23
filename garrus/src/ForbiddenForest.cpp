#include "ForbiddenForest.h"
#include "Animal.h"
#include "NPCSerpent.h"
#include "ItemSerpantFang.h"

ForbiddenForest::ForbiddenForest() {
locationName = "Forbidden Forest";
Animal* a = new Animal();
NPCSerpent* x = new NPCSerpent("Serpent", a);
inhabitants.push_back(x);

ItemSerpantFang* sf = new ItemSerpantFang();
chest.push_back(sf);
puzzleQuestion = "Dogs have fur, Birds have feathers, Snakes have: ";
puzzleAnswer = "scales";
}

ForbiddenForest::~ForbiddenForest() {
}

int ForbiddenForest:: travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Starting Location" << std::endl;
std::cout << "2: Wolf Mountain" << std::endl;
std::cout << "3: Wailing Waterfalls" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
