#ifndef DINHEIRO
#define DINHEIRO

#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"
class Dinheiro : public ArmaDefesa
{
    public:
        Dinheiro(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
