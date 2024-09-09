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
        string e_Name{}; // Nome da perícia
        int e_Level{0}; // O nivel de expertise na pericia
        int e_Total{0}; // Exibe o valor total da pontuação da perícia (e_Key + e_Level)
        string e_Description{}; // Descrio da perícia
        int e_Key{0}; // Identifica a habilidade chave que atua junto a perícia
        Character Characteristics; // Usado para associar o valor chave a percia
    public:
        Expertise();
        Expertise(int id, string name, int level, int total, string description, int key, Character characteristics);
        Expertise(const Expertise &src);
        Expertise& operator=(const Expertise &src);
        void init(const Expertise &src);
        ~Expertise() = default;

        // Metodos GET
        int getID() const;
        string getName() const;
        int getLevel() const;
        int getTotal() const;
        string getDescription() const;
        int getKey() const;
        Character getCharacteristics() const;

        // Metodos SET
        void setID(int id);
        void setName(string name);
        void setLevel(int level);
        void setTotal(int total);
        void setDescription(string description);
        void setKey(int key);
        void setCharacteristics(Character characteristics);

        void displayExpertise(std::ostream &out) const;
    };
}

#endif // EXPERTISE_H_INCLUDED
