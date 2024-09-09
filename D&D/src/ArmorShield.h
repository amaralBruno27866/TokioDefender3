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
        int a_TotalDefense{0}; // Defesa total da armadura
        int a_EspefialEffect{0}; // Efeito especial da armadura
    public:
    ArmorShield();
    ArmorShield(int id, string name, int price, string description, int defense, int type, int additionalDefense, int totalDefense, int specialEffect);
    ArmorShield(const ArmorShield &src);
    ArmorShield& operator=(const ArmorShield &src);
    void init(const ArmorShield &src);
    ~ArmorShield() = default;

    // Metodos GET
    int getID() const;
    string getName() const;
    string getDescription() const;
    int getPrice() const;
    int getDefense() const;
    int getType() const;
    int getAdditionalDefense() const;
    int getTotalDefense() const;
    int getSpecialEffect() const;

    // Metodos SET
    void setID(int id);
    void setName(string name);
    void setDescription(string description);
    void setPrice(int price);
    void setDefense(int defense);
    void setType(int type);
    void setAdditionalDefense(int additionalDefense);
    void setTotalDefense(int totalDefense);
    void setSpecialEffect(int specialEffect);

    void displayArmorShield(std::ostream &out) const;
    };
}

#endif // ARMOR_SHIELD_H_INCLUDED