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
    const int TYPE{3}; // Tipo de equipamento: 0 = Arma, 1 = Armadura, 2 = Acessório, 3 = Consumível
    class Items : public Equipment{
    private:
        int i_SpecialEffect{0}; // Efeito especial do item
        Character Characteristics;
        Magic Magic;
        Advantages Advantages;
        Expertise Expertise;
        int i_Uses{0}; // Quantidade de vezes que o item pode ser usado
    public:
        Items();
        Items(int id, string name, int price, string description, int specialEffect, Character characteristics, dungeon::Magic magic, dungeon::Advantages advantages, dungeon::Expertise expertise, int uses);
        Items(const Items &src);
        Items& operator=(const Items &src);
        void init(const Items &src);
        ~Items() = default;

        // Metodos GET
        int getID() const;
        string getName() const;
        string getDescription() const;
        int getPrice() const;
        int getType() const;
        int getSpecialEffect() const;
        Character getCharacteristics() const;
        dungeon::Magic getMagic() const;
        dungeon::Advantages retrieveAdvantages() const;
        dungeon::Expertise getExpertise() const;
        int getUses() const;

        // Metodos SET
        void setID(int id);
        void setName(string name);
        void setDescription(string description);
        void setPrice(int price);
        void setType(int type);
        void setSpecialEffect(int specialEffect);
        void setCharacteristics(Character characteristics);
        void setMagic(dungeon::Magic magic);
        void setAdvantages(dungeon::Advantages advantages);
        void setExpertise(dungeon::Expertise expertise);
        void setUses(int uses);

        void displayItems(std::ostream &out) const;
    };
}

#endif // ITEMS_H_INCLUDED