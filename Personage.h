#ifndef PERSONAGE_H_INCLUDED
#define PERSONAGE_H_INCLUDED
#include <iostream>
#include <string>
#include <ostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Personage
{
       //overload operator << (output)
       friend ostream &operator<<(ostream &, const Personage &);
public:
       //initiation default constructor
       Personage();
       //copy constructor
       Personage(const Personage &, int);
       //destructor
       ~Personage();
       // return an quantity of Personage
       string getQuantiy()
       //overload operator (attribution)
       const Personage &operator=(const Personage &);
       //overload operator == (equality)
       bool operator == (const Personage &) const;
       //overload operator != (difference)
       bool operator != (const Personage &name) const
       {
           return ! (*this == name);
       }
        // Message welcome
        void Messageinitial()const;

       // member function verification
       void verification();
       //member function for add Personages
       void addPersonage(const string &);
       //
       void addPersonageCout()const;

private:
    // quantity of type integer
    int quantity;
    // verification if it is live
    bool life;
    // number Personage of type static int
    static int numPersonage;
    // number maximum personage of type const static
    const static maxPersonage;
    // pointer name from the one Personage of that type string
    string *namePersonage;
    //name from the one Personage of that type string
    string qtdPersonage;
    //
    string *listName;
};



#endif // PERSONAGE_H_INCLUDED
