#ifndef WEREWOLF_WEREWOLF_H
#define WEREWOLF_WEREWOLF_H

#include "Human.h"
#include "Wolf.h"

class Werewolf : public Human, public Wolf
{

public:
    Werewolf();
    ~Werewolf();
};


#endif //WEREWOLF_WEREWOLF_H
