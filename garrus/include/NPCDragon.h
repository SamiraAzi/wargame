#ifndef NPCDRAGON_H_INCLUDED
#define NPCDRAGON_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCDragon : public NPC {
 public:
  NPCDragon(std::string nameParam, CharacterClass* characterClass);
  ~NPCDragon();
};
#endif // NPCDRAGON_H_INCLUDED
