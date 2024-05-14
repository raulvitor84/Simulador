#include "SrBarriga.hpp"

SrBarriga::SrBarriga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int SrBarriga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int SrBarriga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string SrBarriga::pegarDescricao()
{
    return "Tinha que ser o Chaves de novo !";
}

