#include "GhostTown.h"
#include "NPCGhost.h"
#include "Spirit.h"
#include "ItemGhostSpellbook.h"


GhostTown::GhostTown() {
locationName = "Ghost Town";

Spirit* s = new Spirit();
NPCGhost* ghost = new NPCGhost("Spooky Ghost", s);
NPCGhost* ghost2 = new NPCGhost("Ghost", s);
inhabitants.push_back(ghost);
inhabitants.push_back(ghost2);

ItemGhostSpellbook* gs = new ItemGhostSpellbook();
chest.push_back(gs);
puzzleQuestion = "How do you spell ghost backwards?";
puzzleAnswer = "tsohg";
}

GhostTown::~GhostTown() {
}

int GhostTown::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Starting Location" << std::endl;
std::cout << "2: Wailing Waterfalls" << std::endl;
std::cout << "3: Lions Lair" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
