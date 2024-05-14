#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Simulador.hpp"
#include "Personagem.hpp"

using std::cout;
using std::endl;



bool Simulador::adicionarPersonagem(Personagem* personagem, int equipe)
{
    switch (equipe)
    {
        case 1:
            equipe1.push_back(personagem);
            return true;

        case 2:
            equipe2.push_back(personagem);
            return true;

        default:
            return false;
    }
}

bool Simulador::removerPersonagem(Personagem* personagem, int equipe)
{
    if (equipe == 1)
    {
        return removerPersonagem(personagem, equipe1);
    }

    if(equipe == 2)
    {
        return removerPersonagem(personagem, equipe2);
    }

    return false;
}

bool Simulador::removerPersonagem(Personagem* personagem, vector<Personagem*>& equipe)
{
    int posicoes = 0;
    for(auto p : equipe)
    {
        if(p->getId() == personagem->getId())
        {
            equipe.erase(equipe.begin()+posicoes);
            return true;
        }
        posicoes++;
    }
    return false;
}

int Simulador::calcularVidaEquipe(int seletorDeEquipe)
{
    vector<Personagem*> equipe = seletorDeEquipe == 1 ? equipe1 : equipe2;
    int soma = 0;
    for (auto personagem : equipe)
    {
        soma += personagem->getVida();
    }
    return soma;
}

Personagem* Simulador::proximoPersonagem(vector<Personagem*>& equipe)
{
    int tamanho = equipe.size();
    if (tamanho == 0)
    {
        return nullptr; // Retorna nullptr se a equipe estiver vazia
    }

    int contador = 0;
    while (contador < tamanho)
    {
        if (equipe[contador]->getVida()>0)
        {
            return equipe[contador];
        }
        contador++;

    }

    return nullptr;
}

int Simulador::criarCombate(Personagem* personagem1, Personagem* personagem2)
{
    int ataque = personagem1->gerarAtaque();
    int defesa = personagem2->criarDefesa();
    int dano = ataque - defesa < 0 ? 0 : ataque - defesa;
    int nova_vida = personagem2->getVida() - dano > 0 ? personagem2->getVida() - dano : 0;
    personagem2->setVida(nova_vida);
    return dano;
}

string Simulador::criarSaida(Personagem* personagem1, Personagem* personagem2, int dano)
{
    string saida = "---------------------------------------------------------\n";
    saida += "O personagem " + personagem1->getNome() + " irá atacar o " + personagem2->getNome() + "\n";
    saida += "com a sua arma " + personagem1->getArmaAtaque()->getDescricaoArma() + "\n";
    saida += "Dano causado = " + std::to_string(dano) + "\n";
    saida += dano > 0 ? personagem1->getNome() + ": " : "";
    saida += dano > 0 ? personagem1->pegarDescricao() : "";
    saida += "\nVIDA:\n" + personagem1->getNome() + " [" + std::to_string(personagem1->getVida()) + "] " + personagem2->getNome() + " [" +
             std::to_string(personagem2->getVida()) + "]";
    saida += "\nEquipe 1 " + std::to_string(calcularVidaEquipe(1)) + " x " +
             std::to_string(calcularVidaEquipe(2)) + " Equipe 2";
    saida += "\n---------------------------------------------------------\n";
    return saida;
}

void Simulador::iniciarSimulacao()
{

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int dano = 0;
    Personagem* personagemAtacante;
    Personagem* personagemDefesa;
    while (calcularVidaEquipe(1) > 0 && calcularVidaEquipe(2) > 0)
    {
        // Seleciona um personagem de cada equipe para o próximo ataque
        personagemAtacante = proximoPersonagem(equipe1);
        personagemDefesa = proximoPersonagem(equipe2);

        // Se um dos personagens for nulo, significa que a equipe correspondente está sem personagens
        if (personagemAtacante == nullptr || personagemDefesa == nullptr)
        {
            break; // Sai do loop se uma das equipes estiver sem personagens
        }

        // Realiza o combate entre os personagens selecionados
        dano = criarCombate(personagemAtacante, personagemDefesa);
        cout << criarSaida(personagemAtacante, personagemDefesa, dano) << endl;
    }
}
