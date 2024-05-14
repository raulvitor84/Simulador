#ifndef OCULOS
#define OCULOS

#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"
class Oculos : public ArmaDefesa
{
    public:
        Oculos(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
