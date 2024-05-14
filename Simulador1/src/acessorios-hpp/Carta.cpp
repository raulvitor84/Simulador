#include "ArmaAtaque.hpp"
#include "Carta.hpp"

Carta::Carta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Carta::gerarForcaAtaque()
{
    return maxForca;
}

string Carta::gerarRuidoAtaque()
{
    return "SLEEP!";
}
