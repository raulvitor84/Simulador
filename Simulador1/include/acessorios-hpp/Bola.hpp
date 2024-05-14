#ifndef BOLA
#define BOLA

#include "ArmaAtaque.hpp"
class Bola : public ArmaAtaque
{
    public:
        Bola(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
