#include "ArmaAtaque.hpp"
#include "Vassoura.hpp"

Vassoura::Vassoura(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Vassoura::gerarForcaAtaque()
{
    return maxForca;
}

string Vassoura::gerarRuidoAtaque()
{
    return "CRAC CRAC! ";
}
