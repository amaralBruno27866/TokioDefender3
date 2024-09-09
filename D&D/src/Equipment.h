#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
namespace dungeon{
    class Equipment{
    private:
        int e_ID{0}; // ID que identifica o equipamento dentro do sistema
        string e_Name{}; // Nome do equipamento
        int e_Price{0}; // Preço do equipamento
        int e_Type{0}; // Tipo de equipamento: 0 = Arma, 1 = Armadura, 2 = Acessório, 3 = Consumível
    public:
    };
}

#endif // EQUIPMENT_H_INCLUDED