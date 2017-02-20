#include <iostream>
#include "Personage.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;


int Zombies::numPersonage=0;
int maxPersonage = 25;


//implementation an initiation default constructor
Personage::Personage()
{
    this->quantity = "";
    this->life= false;

    numPersonage++;
}


void Personage::Messageinitial()const
{
    cout << " Welcome the game!  " << endl;

}

string getQuantiy()
{
    return quantity;

}



  // Memory allocation
const Personage &operator= (const Personage &Personage)
{
    this->quantity = Personage.quantity;
    this->life = Personage.life;
    delete [] quantity;
    delete [] life;
    this->quantity= new quantity[Personage.cout];
    this->life= new life[Personage.cout];

    for(int i = 0; i < Personage.count; i++)
        this->quantity[i] = Personage.quantity[i];


    return *this;
}
// add Personage
// string namesPersonage;
//string *listName;
void Personage::addPersonage(const string &pessoa)
{
    string *aux = new string[qtdPersonage];

    for ( int i = 0; i < qtdPersonage; i++)
        aux[i] = namePersonage[i];
    delete [] namePersonage;
    namePersonage = new string[++qtdPersonage];

    for ( int i = 0; i < qtdPersonage-1; i++)
        namePersonage[i]  = aux[i];

    namePersonage[qtdPersonage-1] = livro;

    delete [] aux;
}


//implementation overload operator <<
ostream &operator<<(ostream &output, const Personage &Personage)
{
    output << "Quantity: " << Personage.quantity << "Life: " << Personage.life << endl;
    return output;

}
//implementation overload operator =
const Personage &Personage::operator= (const Personage &Personage)
{
    this->quantity = Personage.quantity;
    this->life = Personage.life;
    return *this;
}
//implementation overload operator ==
bool Personage::operator== (const Personage &quantity, &life) const
{
    if (this->quantity != Personage.quantity)
        return false;
    if (this->life != Personage.life)
        return false;
    return true;
}
//implementation overload operator !=
bool operator!= (const Personage &quantity,&life) const;
{
    return ! (*this == qauntity && *this == life);
}
