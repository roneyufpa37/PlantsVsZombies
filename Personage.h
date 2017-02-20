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
       //overload operator (attribution)
       const Personage &operator=(const Personage &);
       //overload operator == (equality)
       bool operator == (const Personage &) const;
       //overload operator != (difference)
       bool operator != (const Personage &name) const
       {
           return ! (*this == name);
       }

       //member function walk
       void walking();
       // member function verification
       void verification();
       //member function for add Personages
       void addPersonages(const string &);

private:
    // quantity of type integer
    int quantity;
    // verification if it is live
    bool life;
    // pointer name from the one Personage of that type string
    string *namePersonage;
};



#endif // PERSONAGE_H_INCLUDED
