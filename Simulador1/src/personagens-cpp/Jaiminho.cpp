#include "Jaiminho.hpp"

Jaiminho::Jaiminho(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Jaiminho::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Jaiminho::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Jaiminho::pegarDescricao()
{
    return "Eu quero evitar a fadiga. ";
}
