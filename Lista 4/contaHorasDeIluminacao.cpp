/*
    Arquivo: contaHorasDeIluminacao.cpp
    Objetivo: Receber a quantidade de velas e quantas podem ser usadas para
              criar uma nova e retornar a quantidade de horas de iluminação. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    // Variáveis referentes às velas
    int v_iniciais, v_necessarias;
    // Variáveis referentes às horas
    int h_inicial = 0, h_adicionais = 0, h_final = 0;

    cout << "Indique a quantidade de velas que o engenheiro possui:\n";
    cin >> v_iniciais;
    cout << "Indique quantas velas queimadas são necessárias para se criar uma nova vela: \n";
    cin >> v_necessarias;

    h_inicial = v_iniciais;

    // Após a queima de todas as velas iniciais, verifica a quantidade de velas novas
    while(v_iniciais >= v_necessarias){
        // A cada v_necessarias velas queimadas para criar uma nova vela
        v_iniciais -= v_necessarias;
        // Cria uma nova vela e ganha mais uma hora de iluminação
        v_iniciais++;
        h_adicionais++;
    }

    h_final = h_inicial + h_adicionais;

    cout << "O engenheiro terá " << h_final << " horas de iluminação garantida.\n";

    return 0;
}
