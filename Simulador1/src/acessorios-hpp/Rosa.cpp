#include "ArmaAtaque.hpp"
#include "Rosa.hpp"

Rosa::Rosa(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Rosa::gerarForcaAtaque()
{
    return maxForca;
}

string Rosa::gerarRuidoAtaque()
{
    return "plin plin";
}
