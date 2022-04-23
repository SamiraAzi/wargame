#ifndef NPC_H_INCLUDED
#define NPC_H_INCLUDED
#include <string>
#include "Player.h"
#include "Character.h"
class NPC: public Character {
 public:
  void setFriendly(bool friendly_) { friendly = friendly_; }
  void setShop(bool shop_) { shop = shop_; }
 private:
  bool friendly = false;
  bool shop = false;
};
#endif // NPC_H_INCLUDED
