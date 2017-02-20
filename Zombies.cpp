#include <iostream>
#include "Zombies.h"
#include "Personage.h"
#include "Date.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

int Zombies::numZombies=0;
int maxZombies =50;


//implementation an initiation default constructor
Zombies::Zombies()
{
    this->name = "";
    this->speed= 0;
    this->count = 0;

    numZombies++;
}
//member function for show message of welcome
void Zombies::Messageinitial()const
{
    cout << "Welcome to the game " << endl;
}

//return name Zombie
string getName()
{
    return name;
}

//set name Zombie
void Zombies::setName(string name)
{
    if (name.length() <= 10)
        Zombies.name = name;
    if (name.length()>10)
    {
        Zombies.name = name.substr(0,10);
        cout << "Name " << Zombies.name<< endl;
    }
}

//return number Zombies
int Zombies::getNumZombies(){
      return numZombies;
}
  //verification in what space it is moviment
  bool moviment()
  {
      cout << "Were it is if moviment" << endl;
      cin >> Zombies.walk >> endl;
      if (Zombies.walk ==  earth)
        cout << "terreste" << endl;
      else if (Zombies.walk == aquatico)
        cout << "aquatico" << endl;
    default:
        cout << "ashwer stronge" << endl;
  }
   bool speed()
   {
       cout << "tabela de velocidade" << endl;
       for (i=0;i<=4;i++){
        cout << medidor[i] << endl;
       }

   }

//implementation overload operator <<
ostream &operator<<(ostream &output, const Zombies &Zombies)
{
    output << "name: " << Zombies.name << "Speed: " << Zombies.speed << endl;
    return output;

}
//implementation overload operator =
const Zombies &Zombies::operator= (const Zombies &Zombies)
{
    this->namePersonage = Zombies.name;
    this->speed = Zombies.speed;
    return *this;
}
//implementation overload operator ==
bool Zombies::operator== (const Zombies &name) const
{
    if (this->name != Zombies.name)
        return false;
    if (this->speed != Zombies.speed)
        return false;
    return true;
}
//implementation overload operator !=
bool operator!= (const Zombies &name,&speed) const;
{
    return ! (*this == name && *this == speed);
}
