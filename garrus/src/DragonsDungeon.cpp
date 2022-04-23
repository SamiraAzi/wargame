#include "DragonsDungeon.h"
#include "NPCDragon.h"
#include "MysticalCreature.h"

DragonsDungeon::DragonsDungeon() {
locationName = "Dragons Dungeon";
MysticalCreature* mc = new MysticalCreature();
NPCDragon* x = new NPCDragon("Mystical Dragon", mc);
inhabitants.push_back(x);
puzzleQuestion = "2000 is the year of what animal";
puzzleAnswer = "dragon";
}
DragonsDungeon::~DragonsDungeon() {
}
int DragonsDungeon::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Golden Glacier" << std::endl;
std::cout << "2: Barren Dessert" << std::endl;
std::cout << "3: Ride a dragon back to the Starting Location." << std::endl;

int selection;
std::cin >> selection;
return selection;
}
