#ifndef NPCLION_H_INCLUDED
#define NPCLION_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCLion : public NPC {
 public:
  NPCLion(std::string nameParam, CharacterClass* characterClass);
  ~NPCLion();
};
#endif // NPCLION_H_INCLUDED
