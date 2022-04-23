#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED
#include "Character.h"
#include "CharacterClass.h"
#include "Item.h"
#include <string>
#include <vector>
class Character {
 public:
  void init();
  virtual void printCharacterInfo();
  virtual void levelUp();
  void attack(Character* opponent);
  void printInventory();
  void printCharacterClassStats(Character* character);
  void addItem(Item* item);
  void dropItem(Item* itemToDrop);
  void printBattleStats(Character* opponent);
//Accessors
  inline const std::string& getName() const { return this->name; }
  inline const int& getLevel() const { return this->level; }
  inline const int& getHealth() const { return this->health; }
  inline const int& getHealthMax() const { return this->healthMax; }
  CharacterClass* getCharacterClass() { return characterClass; }
  std::vector<Item*> getInventory() { return inventory; }
//Modifiers
  void setName(std::string name_) { name = name_; }
  void setLevel(int level_) { level = level_; }
  void setHealth(int health_) { health = health_; }
  void setHealthMax(int healthMax_) { healthMax = healthMax_; }
  void setGold(int gold_) { gold = gold_; }
  void setCharacterClass(CharacterClass* characterClass_)
  { characterClass = characterClass_; }
  void setDamage(int damage_) { damage = damage_; }
  void setIsHuman(bool isHuman_) { isHuman = isHuman_; }

 private:
  std::string name;
  bool isHuman;
  int level;
  int health;
  int healthMax;
  int gold;
  int damage;
  CharacterClass* characterClass = nullptr;
  std::vector<Item*> inventory;
};
#endif //CHARACTER_H_INCLUDED
