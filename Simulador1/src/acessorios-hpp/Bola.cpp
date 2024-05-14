#include "ArmaAtaque.hpp"
#include "Bola.hpp"

Bola::Bola(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Bola::gerarForcaAtaque()
{
    return maxForca;
}

string Bola::gerarRuidoAtaque()
{
    return "BOOM!";
}
