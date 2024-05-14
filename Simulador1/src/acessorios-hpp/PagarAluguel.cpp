#include "ArmaAtaque.hpp"
#include "PagarAluguel.hpp"
#include <string>

using std::string;

PagarAluguel::PagarAluguel(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int PagarAluguel::gerarForcaAtaque()
{
    return maxForca;
}

string PagarAluguel::gerarRuidoAtaque()
{
    return "Me pague o aluguel !";
}
