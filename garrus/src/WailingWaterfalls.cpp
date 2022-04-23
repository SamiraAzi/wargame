#include "WailingWaterfalls.h"
#include "Animal.h"
#include "NPCShark.h"
#include "ItemSharkBrain.h"

WailingWaterfalls::WailingWaterfalls() {
locationName = "Wailing Waterfalls";
Animal* a = new Animal();
NPCShark* x = new NPCShark("Shark", a);
inhabitants.push_back(x);

ItemSharkBrain* sb = new ItemSharkBrain();
chest.push_back(sb);
puzzleQuestion = "What creature lives at this location?";
puzzleAnswer = "shark";
}

WailingWaterfalls::~WailingWaterfalls() {
}

int WailingWaterfalls::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Forbidden Forest" << std::endl;
std::cout << "2: Ghost Town" << std::endl;
std::cout << "3: Barren Dessert" << std::endl;
std::cout << "4: Golden Glacier" << std::endl;


int selection;
std::cin >> selection;
return selection;
}
