/*
    Arquivo: converteMedida.cpp
    Objetivo: Receber uma medida em metros e retornar sua
              conversão para km, pés ou milhas.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float conversao(int o, float m);

int main()
{
    float medida, resultado = 0;
    int opcao = 0;

    cout << "Insira a medida em metros: ";
    cin >> medida;

    cout << "Escolha uma opção de conversão:\n";
    cout << "1 para converter a medida para quilômetros.\n";
    cout << "2 para converter a medida para pés.\n";
    cout << "3 para converter a medida para milhas.\n";

    cin >> opcao;

    while (opcao < 1 || opcao > 3)
    {
        cout << "Erro! Escolha uma opção de 1 a 3: ";
        cin >> opcao;
    }

    resultado = conversao(opcao, medida);

    cout << "O resultado da conversão é: " << resultado << endl; 

    return 0;
}

float conversao(int o, float m)
{
    float conv = 0;

    switch (o)
    {
    case 1:
        conv = m/1000;
        break;

    case 2:
        conv = m*3.281;
        break;

    case 3:
        conv = m*0.000621371;
        break;

    default:
        break;
    }
    
    return conv;
}