#ifndef ABILITY_H_INCLUDED
#define ABILITY_H_INCLUDED

#include <string>

class Ability {
 public:
  virtual int useAbility() = 0;
//Accessors
  inline const std::string& getAbilityName() const { return this->abilityName; }
  int getAbilityChangeValue() { return changeValue; }
//Modifiers
 protected:
  std::string abilityName;
  int changeValue;
};
#endif //ABILITY_H_INCLUDED
