#include "StartingRoom.h"
#include <iostream>
#include "ItemSword.h"
#include "ItemShield.h"
#include "ItemBook.h"

StartingRoom::StartingRoom() {
locationName = "Starting Room";

ItemSword* sword = new ItemSword();
ItemShield* shield = new ItemShield();
ItemBook* book = new ItemBook();
chest.push_back(sword);
chest.push_back(shield);
chest.push_back(book);
puzzleQuestion = "Whats 2 + 2?";
puzzleAnswer = "4";
}
StartingRoom::~StartingRoom() {
}

int StartingRoom::travel() {
std::cout << "Where would you like to travel? Enter a single digit"
<< std::endl;
std::cout << "1: Forbidden Forest" << std::endl;
std::cout << "2: Ghost Town" << std::endl;

int selection;
std::cin >> selection;
return selection;
}
