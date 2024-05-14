#include "DonaFlorinda.hpp"

DonaFlorinda::DonaFlorinda(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int DonaFlorinda::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int DonaFlorinda::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string DonaFlorinda::pegarDescricao()
{
    return "N�o gostaria de entrar e tomar uma x�cara de caf� ?";
}
