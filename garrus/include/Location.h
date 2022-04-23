#ifndef LOCATION_H_INCLUDED
#define LOCATION_H_INCLUDED
#include <iostream>
#include <string>
#include "NPC.h"
#include "Item.h"
#include <vector>

class Location {
 public:
//Functions
  virtual int travel() = 0;//will have unique travel code for each location
void printInhabitants();
Item* openChest();
void removeInhabitants(NPC* inhabitant);
//Accessors
inline const std::string& getName() const { return this->locationName; }
inline const bool& getSafe() const { return this->isSafe; }
std::vector<NPC*> getInhabitants() const { return this->inhabitants; }
std::vector<Item*> getItems() const { return this->chest; }
inline const std::string& getPuzzleQuestion() const
{ return this->puzzleQuestion; }
inline const std::string& getPuzzleAnswer() const { return this->puzzleAnswer; }
//Modifiers

 protected:
  std::string locationName;
  bool isSafe = true;
  std::vector<NPC*> inhabitants;
  std::vector<Item*> chest;
  std::string puzzleQuestion;
  std::string puzzleAnswer;
};
#endif //LOCATION_H_INCLUDED
