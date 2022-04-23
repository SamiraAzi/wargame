#ifndef NPCWOLF_H_INCLUDED
#define NPCWOLF_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCWolf : public NPC {
 public:
  NPCWolf(std::string nameParam, CharacterClass* characterClass);
  ~NPCWolf();
};
#endif // NPCWOLF_H_INCLUDED
