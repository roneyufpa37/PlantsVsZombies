#ifndef ZOMBIES_H_INCLUDED
#define ZOMBIES_H_INCLUDED
#include<string>
#include<ostream>
#include "Personage.h"
#include "Date.h"


using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class Zombies: public Personage
{
    //overload operator <<
   friend ostream &operator<<(ostream &, const Zombies &);
public:
    //initiation default constructor
    Zombies();
    //constructor
    Zombies(const string &);
    //copy constructor
    Zombies(const Zombies &);
    //destructor
    ~Zombies();

    //overload operator =
    const Zombies &operator=(const Zombies &);
    //overload operator ==
    bool operator ==(const Zombies &name)const;
    //overload operator !=
    bool operator != (const Zombies &name) const
    {
        return ! (*this == name);
    }
    //member function MessageInitial()
    void Messageinitial() const;
    //return name Zombie
    string getName();
    //set name
    void setName(string);
    //information number Zombies
    static int getNumZombies();
    //verification in what space it is moviment
    bool moviment();
    //verification if it is flying
    bool fly();

private:
    //name type string
    string name;
    // walk type string
    string walk;
    // number zombies type static int
    static int numZombies;
    //define the number maximum of zombies:type const static int
    const static int maxZombies;
    // define an type int count;
    int count;
    //define a pointer`pont` of type int
    int medidor[5];

};


#endif // ZOMBIES_H_INCLUDED
