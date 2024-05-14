#ifndef CARTA
#define CARTA

#include "ArmaAtaque.hpp"
class Carta : public ArmaAtaque
{
    public:
        Carta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
