#ifndef MAGIC_H_INCLUDED
#define MAGIC_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"

using namespace std;
namespace dungeon{
    class Magic{
    private:
        int m_ID{0}; // ID que identifica a magia dentro do sistema
        string m_Name{}; // Nome da magia
        Character m_Path; // Caminho da magia usado para executar a magia: pode haver mais de um
        int m_Cost{0}; // Quanto de pontos de magia deve ser gasto para executar a magia
        int m_Range{0}; // Representa o alcance da magia em metros de distância, um valor 0 significa uso pessoal
        int m_Duration{0}; // Quantas rodadas, minutos, horas ou dias uma magia pode durars
        int m_Effect{0}; // Se a magia é em: Área (Circulo), Cone (Triangulo), Linha (Cilindro horizontal), Pilar (Cilindro vertical)
    public:
        Magic();
        Magic(int id, string name, Character path, int cost, int range, int duration, int effect);
        Magic(const Magic &src);
        Magic& operator=(const Magic &src);
        void init(const Magic &src);
        ~Magic() = default;

        // Metodos GET
        int getID() const;
        string getName() const;
        Character getPath() const;
        int getCost() const;
        int getRange() const;
        int getDuration() const;
        int getEffect() const;

        // Metodos SET
        void setID(int id);
        void setName(string name);
        void setPath(Character path);
        void setCost(int cost);
        void setRange(int range);
        void setDuration(int duration);
        void setEffect(int effect);

        void displayMagic(std::ostream &out) const;
    };
}

#endif // MAGIC_H_INCLUDED
