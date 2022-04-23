#ifndef NPCSERPENT_H_INCLUDED
#define NPCSERPENT_H_INCLUDED
#include "NPC.h"
#include <string>
class NPCSerpent : public NPC {
 public:
  NPCSerpent(std::string nameParam, CharacterClass* characterClass);
  ~NPCSerpent();
};
#endif // NPCSERPENT_H_INCLUDED
