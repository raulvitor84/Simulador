#ifndef SRBARRIGA
#define SRBARRIGA
#include "Personagem.hpp"
class SrBarriga : public Personagem
{
    public:
        SrBarriga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
