#include "Kiko.hpp"

Kiko::Kiko(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Kiko::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Kiko::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Kiko::pegarDescricao()
{
    return "Cale-se, cale-se, cale-se, você me deixa looooouco!";
}
