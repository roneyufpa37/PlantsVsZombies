#ifndef ZOMBIES_H
#define ZOMBIES_H
#include<iostream.h>

using std::string;

class Zombies
{
public:
	Zombies();
    Zombies(const string &)	;
	Zombies(const Zombies &);
   ~Zombies();
   
   void Messagebeggin()const;
   
   string getName();
   void setName(string);
   void setSpeed(int);
   int getSpeed();
   static int getnumZombies();
		
		bool dance();
		bool jump();
		
		
private:
   string Name;
   int Speed;
   static int numZombies;
   const static int MaxDeZombies=50;
}

int Zombies::numZombies=0;
#endif