/*
    Arquivo: converteParaTempEscolhida.cpp
    Objetivo: Receber uma temperatura em graus Celsius e
              retornar a conversão na escalha escolhida. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float temperatura, conversao;
    int opcao;

    cout << "Insira uma temperatura em graus Celsius: \n";
    cin >> temperatura;
    cout << "Agora, escolha uma opção: " << "\n" << "1 para ver a temperatura em graus Fahrenheit\n";
    cout << "2 para ver a temperatura em graus Kelvin\n" << "3 para ver a temperatura em graus Celsius\n";
    cin >> opcao;

    switch(opcao){
        case 1:
        conversao = (temperatura * 1.8) + 32;
        cout << "A temperatura em graus Fahrenheit é: " << conversao << endl;
        break;

        case 2:
        conversao = temperatura + 273;
        cout << "A temperatura em graus Kelvin é: " << conversao << endl;
        break;

        case 3:
        conversao = temperatura;
        cout << "A temperatura em graus Celsius é: " << conversao << endl;
        break;

        default:
        cout << "Escolha inválida!\n";
        break;
    }
return 0;
}