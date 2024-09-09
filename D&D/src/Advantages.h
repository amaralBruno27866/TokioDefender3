#ifndef ADVANTAGES_H_INCLUDED
#define ADVANTAGES_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"

using namespace std;
namespace dungeon{
    class Advantages{
    private:
        int a_ID{0}; // ID que vai ser usado dentro do sistema para identificar essa habilidade
        string a_Name{}; // Identifica o nome da vantagem ou desvantagem
        int c_Cost{0}; // Informa o custo em pontos que o jogador deve pagar para essa habilidade
        string a_Description{}; // Descrição da vantagem
        Character Characteristics;
    public:
    Advantages();
    Advantages(int id, string name, int cost, string description, Character characteristics);
    Advantages(const Advantages &src);
    Advantages& operator=(const Advantages &src);
    void init(const Advantages &src);
    ~Advantages() = default;

    // Metodos GET
    int getID() const;
    string getName() const;
    string getDescription() const;
    int getCost() const;
    Character getCharacteristics() const;

    // Metodos SET
    void setID(int id);
    void setName(string name);
    void setDescription(string description);
    void setCost(int cost);
    void setCharacteristics(Character characteristics);

    void displayAdvantages(std::ostream &out) const;
    };
}

#endif // ADVANTAGES_H_INCLUDED
