#ifndef WARLOCK_H_INCLUDED
#define WARLOCK_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Equipment.h"

using namespace std;
namespace dungeon{
    class Weapon : public Equipment{
        const int TYPE{0}; // Tipo de equipamento: 0 = Arma, 1 = Armadura, 2 = Acessório, 3 = Consumível
    private:
        int w_DiceDamage{0}; // Dano causado pela arma
        int w_Critical{0}; // Multiplicador de dano crítico
        int w_Range{0}; // Alcance da arma
        int w_Type{0}; // Tipo de arma: 0 = Corpo a corpo, 1 = Distância
        int w_TypeDamage{0}; // Tipo de dano causado pela arma: 0 = Perfurante, 1 = Cortante, 2 = Impacto, 3 = Mágico
        int w_Ammo{0}; // Quantidade de munição que a arma pode carregar
        int w_AdditionalDamage{0}; // Dano adicional causado pela arma
        int w_TotalDamage{0}; // Dano total causado pela arma
        int w_SpecialEffect{0}; // Efeito especial da arma
    public:
        Weapon();
        Weapon(int id, string name, int price, int diceDamage, int critical, int range, int type, int typeDamage, int ammo, string description, int additionalDamage, int totalDamage, int specialEffect);
        Weapon(const Weapon &src);
        Weapon& operator=(const Weapon &src);
        void init(const Weapon &src);
        ~Weapon() = default;

        // Metodos GET
        int getID() const;
        string getName() const;
        int getPrice() const;
        int getDiceDamage() const;
        int getCritical() const;
        int getRange() const;
        int getType() const;
        int getTypeDamage() const;
        int getAmmo() const;
        string getDescription() const;
        int getAdditionalDamage() const;
        int getTotalDamage() const;
        int getSpecialEffect() const;

        // Metodos SET
        void setID(int id);
        void setName(string name);
        void setPrice(int price);
        void setDiceDamage(int diceDamage);
        void setCritical(int critical);
        void setRange(int range);
        void setType(int type);
        void setTypeDamage(int typeDamage);
        void setAmmo(int ammo);
        void setDescription(string description);
        void setAdditionalDamage(int additionalDamage);
        void setTotalDamage(int totalDamage);
        void setSpecialEffect(int specialEffect);

        void displayWeapon(std::ostream &out) const;
    };
}

#endif // WARLOCK_H_INCLUDED