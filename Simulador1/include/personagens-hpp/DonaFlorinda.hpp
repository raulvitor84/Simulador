#ifndef DONAFLORINDA
#define DONAFLORINDA
#include "Personagem.hpp"
class DonaFlorinda : public Personagem
{
    public:
        DonaFlorinda(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
