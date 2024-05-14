#ifndef CHAPEU
#define CHAPEU

#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"
class Chapeu : public ArmaDefesa
{
    public:
        Chapeu(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
