#include "personagem.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

ostream &operator<<(ostream &output, const Personagem &p)
{
   output << p.qtd << p.vivo << p.nomePersonagem << endl;
   return output;

}

bool Personagem::operator = (const Personagem &personagem) const
{
    if (sizeof != personagem.sizeof)
        return false;
        for (int = 0 ; i<sizeof; i++)
            if ( ptr[i] != right.ptr[i] )
                return false;

             return true;
}
bool Personagem::operator== (const Personagem &name) const
{
 if (size != name.size)
    return false;
 for (int = 0 ; i < size, i++)
    if ( pont[i] != name.pont[i])
        return false;

    return true;
}

bool operator!= (const Personagem &name) const;
{
    return ! (*this == name);
}
Personagem::Personagem()
{
    nomePersonagem = "nenhum";
    vivo = false;
}

Personagem::Personagem(const Personagem &nomePersonagem){
	this->nomePersonagem = nomePersonagem;
	this->vivo=true;
}
Personagem::Personagem(const Personagem &personagem)
{
	this->nomePersonagem = personagem.nomePersonagem;
	this->vivo = personagem.morto;
}
void Personagem::addPersonagens(const string &nome)
{
	string *aux = new string[qtd];

	for (int i=0; i < qtd; i++)
		aux[i] = nomePersonagem[i];
		delete [] nomePersonagem;

		nomePersonagem = new string[++qtd];

    for (int i = 0; i < qtd-1; i++)
		nomePersonagem[i] = aux[i];
		nomePersonagem[qtd-1] = nome;
		delete [] aux;
}

void anda()
{
	cout << "Personagem morreu?(True or False)" << endl;
	cin << vivo << endl;
      if (vivo==true)
	    cout << "Personagem continua no jogo" << endl;
	  else
	    cout << "Personagem saiu do jogo" << endl;
}
void verificacao(){
	cout << "Quantos personagens tem?"
	cin << qtd << endl;
	if (qtd>0 && qtd<=25)
		cout << "Poucos Personagens" << endl;
		else if (qtd>25 && qtd<50)
	    cout << "Muitos Personagens" << endl;
		else
	    cout << "Quantidade Invalida" << endl;
}
Personagem::~Personagem()
{

}
