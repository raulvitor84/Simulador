#ifndef BOTAS
#define BOTAS

#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"
class Botas : public ArmaDefesa
{
    public:
        Botas(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
