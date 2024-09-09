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
    }
}

#endif // MAGIC_H_INCLUDED
