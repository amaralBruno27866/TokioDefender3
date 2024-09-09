#ifndef ITEMS_H_INCLUDED
#define ITEMS_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Equipment.h"
#include "Character.h"
#include "Magic.h"
#include "Advantages.h"
#include "Expertise.h"

using namespace std;
namespace dungeon{
    class Items : public Equipment{
    private:
        int i_SpecialEffect{0}; // Efeito especial do item
        Character Characteristics;
        Magic Magic;
        Advantages Advantages;
        Expertise Expertise;
        int i_Uses{0}; // Quantidade de vezes que o item pode ser usado
    public:
    };
}

#endif // ITEMS_H_INCLUDED