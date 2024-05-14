#ifndef ESCUDO
#define ESCUDO

#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"
class Escudo : public ArmaDefesa
{
    public:
        Escudo(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
