#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED
#include <string>
class Item {
 public:
  inline const std::string& getName() const { return this->name; }
  inline const std::string& getStatType() const { return this->statType; }
  inline const int& getIncreaseAmount() const { return this->increaseAmount; }
//modifiers
  void setName(std::string name_) { name = name_; }
void setStatType(std::string statType_) { statType = statType_; }
void setIncreaseAmount(int amount_) { increaseAmount = amount_; }

 private:
  std::string name;
  std::string statType;
  int increaseAmount;
};
#endif // ITEM_H_INCLUDED
