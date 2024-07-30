/*
    Arquivo: soma3Inteiros.cpp
    Objetivo: Receber 3 números inteiros e retornar a soma deles.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, soma;

    cout << "Insira três núemros inteiros separados por espaço: \n";
    cin >> num1 >> num2 >> num3;
    
    soma = num1 + num2 + num3;

    cout << "A soma dos três números é " << soma << endl;

    return 0;
}