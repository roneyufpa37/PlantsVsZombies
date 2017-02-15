#ifndef ZOMBIES_H
#define ZOMBIES_H
#include <string>
#include <ostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class Zombies
{
    friend ostream &operator<<( ostream &, const Zombies &);

public:
    Zombies();
    Zombies(const string &);
    Zombies(const Zombies &);


     const Zombies &operator=( const Zombies &);
     const Zombies &operator= (const Zombies &z);
     bool operator == ( const Zombies &) const;
     bool operator != (const Zombies &name) const
     {
         return ! (*this == name);
     }


   void Messageinitial() const;

   string getname() const;
   void setname(string);
   void setspeed(int);
   int getspeed();
   static int getnumZombies();
   bool dance();
   int attack();


private:
   string name;
   int speed;
   static int numZombies;
   const static int maxDeZombies;
   int size;
   int *pont;
};

#endif
