#ifndef PLANTS__H_INCLUDED
#define PLANTS__H_INCLUDED

#include<string>
#include<ostream>
#include "Personage.h"
#include "Date.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;


class Plants : public
   friend ostream &operator<<(ostream &, const Plants &)
   public:
    // default constructor
    Plants();
    //constructor
    Plants(const string &);
    //copy constructor
    Plants(const Zombies &);
    //destructor
    ~Plants();


    //overload operator =
    const Plants &operator=(const Plants &);
    //overload operator ==
    bool operator ==(const Plants &name)const;
    //overload operator !=
    bool operator != (const Plants &name) const
    {
        return ! (*this == name);
    }


     //member function MessageInitial()
    void Messageinitial() const;
    //return name Plants
    string getName();
    //set name
    void setName(string);
    //information number Plants
    static int getNumPlants();
    //verification in what space it is moviment
    bool attack();
    //verification if it is flying
    bool producer();

private:
    //name type string
    string name;
    // valor type string
    int  valor;
    // resistence type int
    int resistence;
    // number zombies type static int
    static int numZombies;
    //define the number maximum of zombies:type const static int
    const static int maxPlants;
    // define an type int count;
    int count;
    //define a pointer`pont` of type int




};








#endif // PLANTS__H_INCLUDED
