#ifndef NPCSHARK_H_INCLUDED
#define NPCSHARK_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCShark : public NPC {
 public:
  NPCShark(std::string nameParam, CharacterClass* characterClass);
  ~NPCShark();
};
#endif // NPCSHARK_H_INCLUDED
