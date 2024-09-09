#ifndef ASSERORIES_H_INCLUDED
#define ASSERORIES_H_INCLUDED

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
    class Accessories : public Equipment{
        const int TYPE{2}; // Tipo de equipamento: 0 = Arma, 1 = Armadura, 2 = Acessório, 3 = Consumível
    private:
        int ac_SpecialEffect{0}; // Efeito especial do acessório
        Character Characteristics;
        Magic Magic;
        Advantages Advantages;
        Expertise Expertise;
    public:
    };
}

#endif // ASSERORIES_H_INCLUDED