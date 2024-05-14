#include "ArmaDefesa.hpp"
#include "Oculos.hpp"

Oculos::Oculos(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Oculos::getDescricaoArma()
{
    return this->descricaoArma;
}

int Oculos::getResistencia()
{
    return this->resistencia;
}
