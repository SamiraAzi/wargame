#ifndef INTELLIGENCEMODIFIER_H_INCLUDED
#define INTELLIGENCEMODIFIER_H_INCLUDED
#include "Modifier.h"
class IntelligenceModifier : public Modifier {
 public:
  IntelligenceModifier();
  ~IntelligenceModifier();
  int useAbility();
};
#endif //INTELLIGENCEMODIFIER_H_INCLUDED
