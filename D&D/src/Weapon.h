#ifndef WARLOCK_H_INCLUDED
#define WARLOCK_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Equipment.h"

using namespace std;
namespace dungeon{
    class Weapon : public Equipment{
    private:
        int w_ID{0}; // ID que identifica a arma dentro do sistema
        string w_Name{}; // Nome da arma
        int w_DiceDamage{0}; // Dano causado pela arma
        int w_Critical{0}; // Multiplicador de dano crítico
        int w_Range{0}; // Alcance da arma
        int w_Type{0}; // Tipo de arma: 0 = Corpo a corpo, 1 = Distância
        int w_TypeDamage{0}; // Tipo de dano causado pela arma: 0 = Perfurante, 1 = Cortante, 2 = Impacto, 3 = Mágico
        int w_Ammo{0}; // Quantidade de munição que a arma pode carregar
        string w_Description{}; // Descrição da arma
        int w_AdditionalDamage{0}; // Dano adicional causado pela arma
    public:
    };
}

#endif // WARLOCK_H_INCLUDED