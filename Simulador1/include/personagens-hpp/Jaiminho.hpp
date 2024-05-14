#ifndef JAIMINHO
#define JAIMINHO
#include "Personagem.hpp"
class Jaiminho : public Personagem
{
    public:
        Jaiminho(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
