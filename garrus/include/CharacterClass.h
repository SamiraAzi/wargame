#ifndef CHARACTERCLASS_H_INCLUDED
#define CHARACTERCLASS_H_INCLUDED
#include <string>
#include <vector>
#include <iostream>
#include "Ability.h"

class CharacterClass {
 public:
//Functions
  void getAbilityNames();
//Accessors
  inline const std::string& getClassName() const { return this->className; }
  inline const int& getStrength() const { return this->strength; }
  inline const int& getDefence() const { return this->defence; }
  inline const int& getIntelligence() const { return this->intelligence; }
  std::vector<Ability*> getAbilities() const { return this->abilities; }
//Modifiers
  void setStrength(int amount_) { strength = amount_; }
  void setDefence(int amount_) { defence = amount_; }
  void setIntelligence(int amount_) { intelligence = amount_; }
 protected:
  std::string className;
  int strength;
  int defence;
  int intelligence;
  std::vector<Ability*> abilities;
};
#endif //CHARACTERCLASS_H_INCLUDED
