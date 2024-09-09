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
        Accessories();
        Accessories(int id, string name, int price, string description, int specialEffect, Character characteristics, dungeon::Magic magic, dungeon::Advantages advantages, dungeon::Expertise expertise);
        Accessories(const Accessories &src);
        Accessories& operator=(const Accessories &src);
        void init(const Accessories &src);
        ~Accessories() = default;

        // Metodos GET
        int getID() const;
        string getName() const;
        string getDescription() const;
        int getPrice() const;
        int getType() const;
        int getSpecialEffect() const;

        // Metodos SET
        void setID(int id);
        void setName(string name);
        void setDescription(string description);
        void setPrice(int price);
        void setSpecialEffect(int specialEffect);

        void displayAcessories(std::ostream &out) const;
    };
}

#endif // ASSERORIES_H_INCLUDED