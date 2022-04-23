#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>
#include <string>
#include "CharacterClass.h"
#include "Character.h"
class Player : public Character {
 public:
  Player();
  Player(std::string name, CharacterClass* characterClass);
  virtual ~Player();
};
#endif // PLAYER_H_INCLUDED
