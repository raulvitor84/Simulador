#include <iostream>
#include <string>
#include "Rosa.hpp"
#include "Colher.hpp"
#include "Escudo.hpp"
#include "Chaves.hpp"
#include "Simulador.hpp"
#include "Bola.hpp"
#include "Carta.hpp"
#include "PagarAluguel.hpp"
#include "Pirulito.hpp"
#include "Vassoura.hpp"
#include "Botas.hpp"
#include "Chapeu.hpp"
#include "Dinheiro.hpp"
#include "Oculos.hpp"
#include "Pasta.hpp"
#include "Kiko.hpp"
#include "Chiquinha.hpp"
#include "Jaiminho.hpp"
#include "SrBarriga.hpp"
#include "DonaFlorinda.hpp"

using std::cout;
using std::endl;
using std::string;

int main() {
    // Criando armas de ataque e defesa

    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3 = new Bola ("Bola do Kiko",0,70);
    ArmaAtaque* arma4 = new Carta ("Carta do Jaiminho",0,65);
    ArmaAtaque* arma5 = new PagarAluguel ("Pague o alugel",0, 120);
    ArmaAtaque* arma6 = new Pirulito ("Pirulito da chiquinha",0,85);
    ArmaAtaque* arma7 = new Vassoura ("Vassourada da Dona Florinda",0,90);

    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* botas = new Botas ("Couro", 10);
    ArmaDefesa* chapeu = new Chapeu ("Palha", 8);
    ArmaDefesa* dinheiro = new Dinheiro ("Rico", 15);
    ArmaDefesa* oculos = new Oculos ("Visao", 11);
    ArmaDefesa* pasta = new Pasta ("Acessorio", 9);


    // Criando personagens
    Personagem* p1 = new Chaves(1, "Chaves", 100, arma2, escudo);
    Personagem* p2 = new Kiko(2, "Kiko",100, arma3, dinheiro);
    Personagem* p3 = new Chiquinha(3, "Chiquinha",100, arma6, oculos);
    Personagem* p4 = new Jaiminho(4, "Jaiminho",100, arma4, pasta);
    Personagem* p5 = new SrBarriga(5, "SrBarriga",100, arma5, oculos);
    Personagem* p6 = new DonaFlorinda(6, "DonaFlorinda", 100, arma7, dinheiro);

    // Criando o simulador
    Simulador simulador;

    // Adicionando personagens ao simulador
    simulador.adicionarPersonagem(p1, 1);
    simulador.adicionarPersonagem(p2, 2);
    simulador.adicionarPersonagem(p3, 3);
    simulador.adicionarPersonagem(p4, 4);
    simulador.adicionarPersonagem(p5, 5);
    simulador.adicionarPersonagem(p6, 6);

    // Iniciando a simulação
    simulador.iniciarSimulacao();

    // Liberando memória dos personagens
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;

    return 0;
}
