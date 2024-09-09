#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
namespace dungeon{
    struct Characteristics{
        int c_Strength{0}; // Representa sua força física, sua capacidade de levantar, empurrar e erguer objetos, alem de ataques fisicos
        int c_Skill{0}; // Representa suas habilidades manuais, mentais e emocionais
        int c_Resistance{0}; // Representa sua resistencia a encantamentos, feitiço, habilidades mentais, venenos, doenças e maldições
        int c_Armor{0}; // Representa sua capacidade defensiva
        int c_Firepower{0}; // Representa sua capacidadade de ataques a longa distância, seja com um arco, com uma pistola ou magia
    };

    struct PathsOfMagic{
        int c_Water{0}; // Representa o elemento água
        int c_Air{0}; // Representa o elemento ar
        int c_Fire{0}; // Representa o elemento fogo
        int c_Light{0}; // Representa o elemento luz
        int c_Earth{0}; // Representa o elemento terra
        int c_Darkness{0}; // Representa o elemento trevas
    };

    class Character{
    private:
        string c_Name{}; // O nome do seu personagel
        int c_Points{0}; // A quantidade de pontos acumulados
        Characteristics c_Characteristics; // São as caracteristicas básicas do personagem
        int c_LifePoints{0}; // Representa a resistencia a dano, quanto mais pontos, mais dificil de te derrotar
        int c_MagicPoints{0}; // Representa quanta "Mana" seu poersonagem tem, seja para magias ou para habilidades especiais
        string c_History{}; // Um texto que conta um pouco sobre seu personagem.
        int c_XPS{0}; // Representa os pontos de experiência que o jogador possui para comprar novas habilidades e poderes
    public:
    };
}

#endif // CHARACTER_H_INCLUDED
