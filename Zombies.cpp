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
      if (Zombies.walk ==  Terrestrial)
        cout << "Terrestrial" << endl;
      else if (Zombies.walk == aquatic)
        cout << "aquatic" << endl;
    default:
        cout << "Answer wrong" << endl;
  }
   bool eats()
   {
       cout << "Who much eats(Qtd)?" << endl;
       for (i=0;i<=4;i++){
        cout << measurer[i] << endl;
       }

   }



   // Memory allocation
const Zombies &operator= (const Zombies &Zombies)
{
    this->name = Zombies.name;
    this->walk = Zombies.walk;
    delete [] nomePersonagem;
    this->name= new name[Zombies.cout];

    for(int i = 0; i < Zombies.count; i++)
        this->name[i] = Zombies.name[i];

    for(int i = 0; i < Zombies.count; i++)
        this->walk[i] = Zombies.walk[i];


    return *this;
}
//implementation overload operator <<
ostream &operator<<(ostream &output, const Zombies &Zombies)
{
    output << "name: " << Zombies.name << "Speed: " << Zombies.speed << endl;
    output << static_cast< Personage > (Zombies) << endl;
    return output;

}
//implementation overload operator =
const Zombies &Zombies::operator= (const Zombies &Zombies)
{
    this->namePersonage = Zombies.name;
    this->speed = Zombies.speed;
    static_cast< Personage > (*this)  = static_cast < Personage >  (Zombie);
    return *this;
}
//implementation overload operator ==
bool Zombies::operator== (const Zombies &name) const
{
    if (this->name != Zombies.name)
        return false;
    if (this->speed != Zombies.speed)
        return false;
    if (static_cast < Personage> (*this) != static_cast <Personage> (Zombies))
    return true;
}
//implementation overload operator !=
bool operator!= (const Zombies &name,&speed) const;
{
    return ! (*this == name && *this == speed);
    return ! static_cast <Personage> ((*this == name  ) &&  static_cast (*this == speed))
}
