#include "ArmaDefesa.hpp"
#include "Chapeu.hpp"

Chapeu::Chapeu(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Chapeu::getDescricaoArma()
{
    return this->descricaoArma;
}

int Chapeu::getResistencia()
{
    return this->resistencia;
}
