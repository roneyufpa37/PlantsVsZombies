#ifndef ZOMBIES_H
#define ZOMBIES_H
#include <string>

using std::string;

class Zombies
{
public:
	Zombies();
    Zombies(const string &);
	Zombies(const Zombies &);

   void Messageinital() const;

   string getName() const;
   void setName(string);
   void setSpeed(int);
   int getSpeed();
   static int getnumZombies();

		bool dance();
		bool jump();


private:
   string name;
   int speed;
   static int numZombies;
   const static int MaxDeZombies = 50;
};

#endif
