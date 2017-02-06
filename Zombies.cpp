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

ostream &operator<<(ostream &output, const Zombies &z)
{
   output << z.name << z.qtd<< z.speed << z.maxZombies << endl;
   return output;

}

const Zombies &operator= (const Zombies &z)
{
    this->nomePersonagem = z.nomePersonagem;
    this->qtd = z.qtd;
    this->vivo = z.vivo;
    this->speed = z.speed;
    delete [] nomePersonagem;
    this->nomePersonagem= new nomePersonagem[z.cout];

    for(int i = 0; i < z.count; i++)
        this->nomePersonagem[i] = z.nomePersonagem[i];

    return *this;
}


void setname(string name);{
this->name=name;
}
int getname(){
return name;
}
void moviment();
int moviment();
static int setnumZombies();
static int getnumZombies();

Zombies::lives(){
if (numZombies>0)
    return True;
else
    return False;
}
Zombies::moviment(){
    int opcao;
    cout << " Digite o valor da velocidade m/s" << endl;
    cin >> speed;

    switch(speed){
        case 1:
            cout << "Muito lento" << endl;
        case 2:
            cout << "Lento" << endl;
        case 3:
            cout << "Normal" << endl;
        case 4:
            cout << "Rapido" << endl;
        case 5:
            cout <<"Muito Rapido" << endl;
        default
            cout << "Opcao invalida" <<endl;
    }


}

