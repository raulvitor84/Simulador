#ifndef PIRULITO
#define PIRULITO

#include "ArmaAtaque.hpp"
class Pirulito : public ArmaAtaque
{
    public:
        Pirulito(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
