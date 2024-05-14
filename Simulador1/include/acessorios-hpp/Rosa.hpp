#ifndef ROSA
#define ROSA

#include "ArmaAtaque.hpp"
class Rosa : public ArmaAtaque
{
    public:
        Rosa(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
