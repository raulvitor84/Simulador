#ifndef PASTA
#define PASTA

#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"
class Pasta : public ArmaDefesa
{
    public:
        Pasta(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
