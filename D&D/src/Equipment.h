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
        string e_Description{}; // Descrição do equipamento
    public:
        Equipment();
        Equipment(int id, string name, int price, int type,string description);
        Equipment(const Equipment &src);
        Equipment& operator=(const Equipment &src);
        void init(const Equipment &src);
        ~Equipment() = default;

        // Metodos GET
        int getID() const;
        string getName() const;
        int getPrice() const;
        int getType() const;
        string getDescription() const;

        // Metodos SET
        void setID(int id);
        void setName(string name);
        void setPrice(int price);
        void setType(int type);
        void setDescription(string description);

        void displayEquipment(std::ostream &out) const;
    };
}

#endif // EQUIPMENT_H_INCLUDED