#ifndef NPCWALRUS_H_INCLUDED
#define NPCWALRUS_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCWalrus : public NPC {
 public:
  NPCWalrus(std::string nameParam, CharacterClass* characterClass);
  ~NPCWalrus();
};
#endif // NPCWALRUS_H_INCLUDED
