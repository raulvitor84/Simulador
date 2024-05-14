#ifndef KIKO
#define KIKO
#include "Personagem.hpp"
class Kiko : public Personagem
{
    public:
        Kiko(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
