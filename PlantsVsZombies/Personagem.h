//Nova Classe chamada Personagem
//1 construtor default, 1 construtor de copia e 1 outro construtor para a classe
// Com dois atributos e dois metodos
//Um metodo para adicionar personagens, seguindo o exemplo proposto nos slides da ultima aula
// e mais um atributo ponteiro
#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <stdio.h>
#include <string>
aa
using std::string;
using std::cout;
using std::endl;
using std::cin;
class Personagem
{
public:
	  Personagem();
	  Personagem(const Personagem &, int);
	  Personagem(const Personagem &);
	  void anda();
	  void preco();
	  void addPersonagens(const string &);

private:
      int qtd;
	  bool vivo;
      string *nomePersonagem;
};

