#include "Chiquinha.hpp"

Chiquinha::Chiquinha(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Chiquinha::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Chiquinha::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Chiquinha::pegarDescricao()
{
    return "Conta tudo para sua mãe Kiko! ";
}
