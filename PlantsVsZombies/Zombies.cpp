#include "Zombies.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int Zombies::numZombies = 0;
int MaxDeZombies=50;

Zombies::Zombies()
{
    this->name = "Case Case";
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

/*

void setName(string);
void setSpeed(int);
int getSpeed();
static int getnumZombies();

bool dance();
bool jump();

void Zombies::dance(){
    if(true){
        cout<<"This dance"<<endl;
    }
    else{
         cout<<"This not dance"<<endl;
    }
}

Zombies::jump(){
  if(true){
	  cout<<"This jump"<<endl;
 }
 else{
	 cout<<"This not jump"<<endl;
  }
}
*/
