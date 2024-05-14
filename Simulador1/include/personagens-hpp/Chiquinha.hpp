#ifndef CHIQUINHA
#define CHIQUINHA
#include "Personagem.hpp"
class Chiquinha : public Personagem
{
    public:
        Chiquinha(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
