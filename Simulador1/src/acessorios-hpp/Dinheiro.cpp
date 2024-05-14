#include "ArmaDefesa.hpp"
#include "Dinheiro.hpp"

Dinheiro::Dinheiro(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Dinheiro::getDescricaoArma()
{
    return this->descricaoArma;
}

int Dinheiro::getResistencia()
{
    return this->resistencia;
}
