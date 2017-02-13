#include "Zombies.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

int Zombies::numZombies = 0;
int MaxDeZombies=50;

Zombies::Zombies()
{
    this->name = "Jorge";
}

void Zombies::Messageinital() const
{
	 cout<<"Welcome to the game" << endl;
}

Zombies::Zombies(const string &Name){
    this->name = name;
}

int Zombies::getnumZombies() {
    return numZombies;
}


string Zombies::getName() const
{
    return this->name;
}

ostream &operator<<(ostream &output, const Zombies &name, int speed, int numZombies, int maxZombies)
{
   this->name = name;
   this->speed=speed;
   this->numZombies= numZombies;
   output << Zombies.name << Zombies.speed << Zombies.speed << Zombies.maxZombies << endl;
   return output;
    
}

bool Zombies::operator= (const Zombies &zombies) const
{
    if (sizeof != zombies.sizeof)
        return false;
        for (int = 0 ; i<sizeof; i++)
            if ( ptr[i] != right.ptr[i] )
                return false;
                
             return true;   
}

void setName(string);
void setSpeed(int);
int getSpeed();
static int getnumZombies();

