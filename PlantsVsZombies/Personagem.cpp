#include"Personagem.h"

Personagem::Personagem(){
    vivo = "talvez";
    valor = 0;
}

Personagem(Personagem &namepersonagem){
    this.vivo= Personagem.namepersonagem;
    this.valor = Personagem.valor;
}

Personagem:~Personagem(){
    
}