#include "ArmaAtaque.hpp"
#include "Pirulito.hpp"

Pirulito::Pirulito(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pirulito::gerarForcaAtaque()
{
    return maxForca;
}

string Pirulito::gerarRuidoAtaque()
{
    return "SLHUUUP!";
}
