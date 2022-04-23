#ifndef NPCGHOST_H_INCLUDED
#define NPCGHOST_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCGhost : public NPC {
 public:
  NPCGhost(std::string nameParam, CharacterClass* characterClass);
  ~NPCGhost();
};
#endif // NPCGHOST_H_INCLUDED
