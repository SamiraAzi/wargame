#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <ctime>
#include <iostream>
#include "Player.h"
#include "Location.h"
#include <vector>
#include <string>
#include <list>
//Locations
//Top
#include "StartingRoom.h"
#include "ForbiddenForest.h"
#include "WolfMountain.h"
//Middle
#include "GhostTown.h"
#include "WailingWaterfalls.h"
#include "BarrenDesert.h"
//Bottom
#include "LionsLair.h"
#include "GoldenGlacier.h"
#include "DragonsDungeon.h"

class Game {
 public:
  Game();
  virtual ~Game();
void initGame();
void setCharacterClassAndName();
void mainMenu();
void printTravel(Location*);
void printCurrentHealth(Character* character);
void moveLocation(Location*);
void help();
//Accessors
inline bool getPlaying() const { return this->gameRunning; }

 private:
  int choice; //use this to pick from available options?
  bool gameRunning;
  bool fightDone;
  bool hasInhabitants;
  Player* myPlayer;
  Location* myLocation;
  std::string name;
  std::string className;
  std::string puzzleAnswer;
  int puzzlesSolved;
};
#endif //GAME_H_INCLUDED
