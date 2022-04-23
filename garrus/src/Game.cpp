#include "Game.h"
#include "Warrior.h"
#include "Tank.h"
#include "Wizard.h"

Game::Game() {
StartingRoom* s = new StartingRoom();
myLocation = s;
choice = 0;
gameRunning = true;
myPlayer = nullptr;
fightDone = true;
hasInhabitants = true;
}

Game::~Game() {
}
void Game::help() {
std::cout << "========== Your quest is to defeat the Mystical Dragon located"
<< " in the Dragons Dungeon\n";
std::cout << "========== Chests at each location contain items to increase"
<< " your combat stats\n";
std::cout << "========== Defeat other creatures to level up \n";
std::cout << "========== At level 10 you will be able to enter the "
<< "Dragons Dungeon \n";
std::cout << "========== The main menu prints all possible actions \n";

std::cout << "\n========== CLASS INFORMATION ========== \n";
std::cout << "========== Warriors can increase their strength, increasing"
<< " the damage their basic attacks deal\n";
std::cout << "========== Tanks can increase their defence, reducing the "
<< "damage they take\n";
std::cout << "========== Wizards can increase their intelligence, "
<< "increasing special attack damage\n";
}
void Game::setCharacterClassAndName() {
//std::string name;
std::cout << "Enter a name for your character: ";
getline(std::cin, name);
//std::string className;
std::cout << "Choose a class: Warrior, Tank, or Wizard ";
getline(std::cin, className);
if (className.compare("Warrior") == 0) {
Warrior* w = new Warrior;
myPlayer = new Player(name, w);
} else if (className.compare("Tank") == 0) {
Tank* t = new Tank;
myPlayer = new Player(name, t);
} else if (className.compare("Wizard") == 0) {
Wizard* w = new Wizard();
myPlayer = new Player(name, w);
} else {
std::cout << "Not a valid Class, try again\n";
//recursive call to restart the method if invalid class is chosen
setCharacterClassAndName();
}
}
//Functions

void Game::initGame() {
std::cout << "==========| Welcome To Dragonslayer |========== \n";
help();
setCharacterClassAndName();
puzzlesSolved = 0;
StartingRoom* s = new StartingRoom();
myLocation = s;
}

void Game::printCurrentHealth(Character* character) {
std::cout << "\n===================\n";
std::cout << character->getName() << "'s HP:" << character->getHealth() << "/"
<< character->getHealthMax();
std::cout << "\n===================\n";
}

void Game::printTravel(Location* locationPointer) {
std::cout << this->myPlayer->getName() << " traveled from the "
<< myLocation->getName() << " to the " << locationPointer->getName() << "\n";
}

void Game::moveLocation(Location* locationPointer) {
printTravel(locationPointer);
myLocation = locationPointer;
}


void Game::mainMenu() {
std::cout << "----------\n";
std::cout << "---------- \nMAIN MENU\n";
std::cout << "----------\n";
std::cout << "----------";


myPlayer->printInventory();
std::cout << "\nCurrent Location: " << myLocation->getName();
std::cout << "\nPuzzles Solved: " << puzzlesSolved;
std::cout << "\n----------\n";

myLocation->printInhabitants();
std::cout << "----------";

std::cout << "\n0: Quit \n";
std::cout << "1: Travel \n";
std::cout << "2: Read Map \n";
std::cout << "3: View Player Stats \n";
std::cout << "4: Journal \n";
std::cout << "5: Fight \n";
std::cout << "6: Open Chest \n";
std::cout << "7: Drop Inventory Item \n";
std::cout << "8: Help \n";
std::cout << "9: View Location's Puzzle\n";


std::cin >> choice;

switch (choice) {
case 0:
gameRunning = false;
break;

case 1:
//Move to Locations
#pragma region StartingRoom
if (myLocation->getName().compare("Starting Room")== 0) {
StartingRoom* s = new StartingRoom();
int num = s->travel();
if (num == 1) {
ForbiddenForest* f = new ForbiddenForest();
moveLocation(f);
} else if (num == 2) {
GhostTown* g = new GhostTown();
moveLocation(g);
} else {
std::cout << "not a valid input \n";
}
delete s;
} else if (myLocation->getName() == "Forbidden Forest") {
ForbiddenForest* f = new ForbiddenForest();
int num = f->travel();
if (num == 1) {
StartingRoom* s = new StartingRoom();
moveLocation(s);
} else if (num == 2) {
WolfMountain* w = new WolfMountain();
moveLocation(w);
} else if (num == 3) {
WailingWaterfalls* w = new WailingWaterfalls();
moveLocation(w);
} else {
std::cout << "not a valid input \n";
}
delete f;
} else if (myLocation->getName() == "Wolf Mountain") {
WolfMountain* w = new WolfMountain();
int num = w->travel();
if (num == 1) {
ForbiddenForest* f = new ForbiddenForest;
moveLocation(f);
} else if (num == 2) {
BarrenDesert* b = new BarrenDesert();
moveLocation(b);
} else {
std::cout << "not a valid input \n";
}
delete w;
} else if (myLocation->getName() == "Ghost Town") {
GhostTown* g = new GhostTown();
int num = g->travel();
if (num == 1) {
StartingRoom* s = new StartingRoom;
moveLocation(s);
} else if (num == 2) {
WailingWaterfalls* w = new WailingWaterfalls();
moveLocation(w);
} else if (num == 3) {
LionsLair* l = new LionsLair();
moveLocation(l);
} else {
std::cout << "not a valid input \n";
}
delete g;
} else if (myLocation->getName() == "Wailing Waterfalls") {
WailingWaterfalls* w = new WailingWaterfalls();
int num = w->travel();
if (num == 1) {
ForbiddenForest* f = new ForbiddenForest();
moveLocation(f);
} else if (num == 2) {
GhostTown* g = new GhostTown();
moveLocation(g);
} else if (num == 3) {
BarrenDesert* b = new BarrenDesert();
moveLocation(b);
} else if (num == 4) {
GoldenGlacier* g = new GoldenGlacier();
moveLocation(g);
} else {
std::cout << "not a valid input \n";
}
delete w;
} else if (myLocation->getName() == "Barren Desert") {
BarrenDesert* b = new BarrenDesert();
int num = b->travel();
if (num == 1) {
WolfMountain* w = new WolfMountain();
moveLocation(w);
} else if (num == 2) {
WailingWaterfalls* w = new WailingWaterfalls();
moveLocation(w);
} else if (num == 3 && myPlayer->getLevel() >= 10 && puzzlesSolved >= 5) {
DragonsDungeon* d = new DragonsDungeon();
moveLocation(d);
} else if (num == 3 && myPlayer->getLevel() < 10 || puzzlesSolved < 5) {
std::cout << "You must be level 10 or higher to access this area \n";
std::cout << "You also need to solve at least 5 puzzles \n";
} else {
std::cout << "not a valid input \n";
}
delete b;
} else if (myLocation->getName() == "Lions Lair") {
LionsLair* l = new LionsLair();
int num = l->travel();
if (num == 1) {
GhostTown* g = new GhostTown();
moveLocation(g);
} else if (num == 2) {
GoldenGlacier* g = new GoldenGlacier();
moveLocation(g);
} else {
std::cout << "not a valid input \n";
}
delete l;
} else if (myLocation->getName() == "Golden Glacier") {
GoldenGlacier* g = new GoldenGlacier();
int num = g->travel();
if (num == 1) {
LionsLair* l = new LionsLair();
moveLocation(l);
} else if (num == 2) {
WailingWaterfalls* w = new WailingWaterfalls();
moveLocation(w);
} else if (num == 3 && myPlayer->getLevel() >= 10 && puzzlesSolved >= 5) {
DragonsDungeon* d = new DragonsDungeon();
moveLocation(d);
} else if (num == 3 && myPlayer->getLevel() < 10 || puzzlesSolved <5) {
std::cout << "You must be level 10 or higher to access this area \n";
std::cout << "You also need to solve at least 5 puzzles \n";
} else {
std::cout << "not a valid input \n";
}
delete g;
} else if (myLocation->getName() == "Dragons Dungeon") {
DragonsDungeon* d = new DragonsDungeon();
int num = d->travel();
if (num == 1) {
GoldenGlacier* g = new GoldenGlacier();
moveLocation(g);
} else if (num == 2) {
BarrenDesert* b = new BarrenDesert();
moveLocation(b);
} else if (num == 3) {
StartingRoom* s = new StartingRoom();
moveLocation(s);
} else {
std::cout << "not a valid input \n";
}
delete d;
}
break;
case 2:
std::cout << "----- \nMAP\n-----" << std::endl;
std::cout << "---------------------------------------------------" << std::endl;
std::cout << "|Starting Room|Forbidden Forest   |Wolf Mountain  |" << std::endl;
std::cout << "---------------------------------------------------" << std::endl;
std::cout << "|Ghost Town   |Wailing Waterfalls |Barren Desert  |" << std::endl;
std::cout << "---------------------------------------------------" << std::endl;
std::cout << "|Lions Lair   |Golden Glacier     |Dragons Dungeon|" << std::endl;
std::cout << "---------------------------------------------------" << std::endl;
std::cout << "The map is a 3x3 grid as shown above" << std::endl;
std::cout << "You can move left, right, up or down to adjacent locations \n";
break;
case 3:
myPlayer->printCharacterInfo();
break;
case 4:
std::cout << "-----------------" << std::endl;
std::cout << myPlayer->getName() << "'s Journal" << std::endl;
std::cout << "-----------------" << std::endl;
std::cout << "Travel to the Dragons Dungeon and slay the Dragon" << std::endl;
break;
case 5:
fightDone = false;
hasInhabitants = true;
if (myLocation->getInhabitants().size() == 0) {
hasInhabitants = false;
std::cout << "---------------------------------------------\n";
std::cout << "There are no NPC's at this location to fight\n";
std::cout << "---------------------------------------------\n";
}
if (hasInhabitants == true) {
std::cout << "Which NPC would you like to fight? Enter a single digit number\n";
myLocation->printInhabitants();
std::cin >> choice;
}
if (hasInhabitants == true) {
myPlayer->printBattleStats(myLocation->getInhabitants().at(choice - 1));
myPlayer->printBattleStats(myLocation->getInhabitants().at(choice - 1));
while (fightDone == false) {
printCurrentHealth(myPlayer);
printCurrentHealth(myLocation->getInhabitants().at(choice - 1));
if (myLocation->getInhabitants().at(choice - 1)->getHealth() > 0) {
myPlayer->attack(myLocation->getInhabitants().at(choice - 1));//attack
}
if (myPlayer->getHealth() > 0) {//if my hp is over 0 attack
myLocation->getInhabitants().at(choice - 1)->attack(myPlayer);
}
if (myLocation->getInhabitants().at(choice - 1)->getHealth() <= 0) {
fightDone = true;
std::cout << myPlayer->getName() << " defeated "
<< myLocation->getInhabitants().at(choice - 1)->getName() << std::endl;
std::cout << "Your health has been regenerated" << std::endl;
myPlayer->levelUp();
if (myLocation->getInhabitants().at(choice - 1)->getName().compare
("Mystical Dragon") == 0) {
std::cout << "---------------------------------------------\n";
std::cout << "---------------------------------------------\n";
std::cout << "---------------------------------------------\n";
std::cout << "---------------CONGRATULATIONS------------------\n";
std::cout << "-----You have defeated the Mystical Dragon!-----\n";
std::cout << "----- Your legacy will live on forever -----\n";
std::cout << "---------------------------------------------\n";
std::cout << "---------------------------------------------\n";
std::cout << "---------------------------------------------\n";
system("pause");
gameRunning = false;
}
myLocation->removeInhabitants(myLocation->getInhabitants().at(choice - 1));
}
if (myPlayer->getHealth() <= 0) {
fightDone = true;
std::cout << "You have failed your quest\n";
std::cout << "---------------------------------------------\n";
std::cout << "---------------------------------------------\n";
std::cout << "-------------You Were Defeated!---------------\n";
std::cout << "-You have spawned back at the starting location-\n";
std::cout << "---------------------------------------------\n";
std::cout << "Try finding other items or increasing your\n";
std::cout << "class attribute while battling easier NPC's\n";
std::cout << "around the map to be stronger in battle!\n";
std::cout << "---------------------------------------------\n";
StartingRoom* s = new StartingRoom();
myLocation = s;
myPlayer->setHealth(myPlayer->getHealthMax());
}
}
}
break;
case 6:
if (myPlayer->getInventory().size() < 5) {
if (myLocation->getItems().size() > 0) {
myPlayer->addItem(myLocation->openChest());
} else {
std::cout << "------------------------------------------------------\n";
std::cout << "------------------------------------------------------\n";
std::cout << "----------The chest at this location is empty----------\n";
std::cout << "------------------------------------------------------\n";
std::cout << "------------------------------------------------------\n";
}
} else {
std::cout << "------------------------------------------------------\n";
std::cout << "---------------Your inventory is full! ---------------\n";
std::cout << "Clear inventory space to be able to open other chests!\n";
std::cout << "------------------------------------------------------\n";
}
break;
case 7:
std::cout << "------------------------------------------------------\n";
std::cout << "---------- Which item would you like to drop? ----------\n";
std::cout << "------------------------------------------------------\n";
std::cout << "[0] EXIT";
myPlayer->printInventory();
std::cin >> choice;
if (choice > 0) {
myPlayer->dropItem(myPlayer->getInventory().at(choice - 1));
}
break;
case 8:
help();
break;
case 9:
std::cout << "------------------------------------------------------\n";
std::cout << "---------" <<myLocation->getName() << " Puzzle" << "---------\n";
std::cout << "------------------------------------------------------\n";
std::cout << myLocation->getPuzzleQuestion() << "\n";
std::cin >> puzzleAnswer;
if (puzzleAnswer.compare(myLocation->getPuzzleAnswer()) == 0) {
std::cout << "------------------------------------------------------\n";
std::cout << "---------------- YOU SOLVED THE PUZZLE ----------------\n";
std::cout << "--------------------- Great Job! ----------------------\n";
std::cout << "------------------------------------------------------\n";
puzzlesSolved++;
} else {
std::cout << "------------------------------------------------------\n";
std::cout << "------------ THE PUZZLE REMAINS A MYSTERY ------------\n";
std::cout << "------------------------------------------------------\n";
}
break;
default:
break;
}
}
