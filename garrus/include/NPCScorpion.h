#ifndef NPCSCORPION_H_INCLUDED
#define NPCSCORPION_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCScorpion : public NPC {
 public:
  NPCScorpion(std::string nameParam, CharacterClass* characterClass);
  ~NPCScorpion();
};
#endif // NPCSCORPION_H_INCLUDED
