#ifndef EXPERTISE_H_INCLUDED
#define EXPERTISE_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"

using namespace std;
namespace dungeon{
    class Expertise{
    private:
        int e_ID{0}; // Valor que identifica a perícia
        string e-Name{}; // Nome da perícia
        int e_Level{0}; // O nivel de expertise na pericia
        int e_Total{0}; // Exibe o valor total da pontuação da perícia (e_Key + e_Level)
        string e_Description{}; // Descrio da perícia
        int e_Key{0}; // Identifica a habilidade chave que atua junto a perícia
        Character Characteristics; // Usado para associar o valor chave a percia
    public:
    }
}

#endif // EXPERTISE_H_INCLUDED
