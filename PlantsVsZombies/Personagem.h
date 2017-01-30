#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <string>

class Personagem 
{
public :
    Personagem();
    Personagem(Personagem &);
    bool vivo();
    int valor();
private:
    string namepersonagem;
    bool vivo;
};
#endif