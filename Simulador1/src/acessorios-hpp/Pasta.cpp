#include "ArmaDefesa.hpp"
#include "Pasta.hpp"

Pasta::Pasta(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Pasta::getDescricaoArma()
{
    return this->descricaoArma;
}

int Pasta::getResistencia()
{
    return this->resistencia;
}
