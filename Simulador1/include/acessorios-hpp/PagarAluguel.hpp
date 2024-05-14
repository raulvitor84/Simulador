#ifndef PAGARALUGUEL
#define PAGARALUGUEL

#include "ArmaAtaque.hpp"
class PagarAluguel : public ArmaAtaque
{
    public:
        PagarAluguel(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
