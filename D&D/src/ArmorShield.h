#ifndef ARMOR_SHIELD_H_INCLUDED
#define ARMOR_SHIELD_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Equipment.h"

using namespace std;
namespace dungeon{
    class ArmorShield : public Equipment{
        const int TYPE{1}; // Tipo de equipamento: 0 = Arma, 1 = Armadura, 2 = Acessório, 3 = Consumível
    private:
        int a_Defense{0}; // Defesa da armadura
        int a_Type{0}; // Tipo de armadura: 0 = Leve, 1 = Média, 2 = Pesada
        int a_AdditionalDefense{0}; // Defesa adicional da armadura
        string a_Description{}; // Descrição da armadura
        int a_TotalDefense{0}; // Defesa total da armadura
        int a_EspefialEffect{0}; // Efeito especial da armadura
    public:
    };
}

#endif // ARMOR_SHIELD_H_INCLUDED