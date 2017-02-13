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
    
   void Messageinitial() const;

   string getName() const;
   void setName(string);
   void setSpeed(int);
   int getSpeed();
   static int getnumZombies();

private:
   string name;
   int speed;
   static int numZombies;
   const static int maxDeZombies;
};

#endif
