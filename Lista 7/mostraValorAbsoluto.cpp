/*
    Arquivo: mostraValorAbsoluto.cpp
    Objetivo: Receber 5 números inteiros e retornar seus
              respectivos valores absolutos.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int absoluto(int num);

int main()
{
    int num[5] = {};
    int resultado = 0;
    int i;

    for(i=0; i<5; i++)
    {
        cout << "Insira o " << i+1 << "º número inteiro: ";
        cin >> num[i];
    }

    for(i=0; i<5; i++)
    {
        resultado = absoluto(num[i]);
        cout << "O valor absoluto de " << num[i] << " é: " << resultado << endl;
    }

    return 0;
}

int absoluto(int num)
{
    int r = 0;
    
    r = abs(num);

    return r;
}