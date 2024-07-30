/*
    Arquivo: indicaNumPrimo.cpp
    Objetivo: Receber um número inteiro e retornar 1 se ele
              for primo e 0 caso contrario.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int indicaNumPrimo(int n);

int main()
{
    int n = 0;
    int result = 0;

    cout << "Insira um número inteiro: ";
    cin >> n;

    result = indicaNumPrimo(n);

    if(result == 1)
    {
        cout << n << " é um número primo!\n";
    }
    else
    {
        cout << n << " não é um número primo!\n";
    }

    return 0;
}

int indicaNumPrimo(int n)
{
    int resposta = 0;
    int i;

    for(i=n; i>0; i--)
    {
        if (n%i == 0)
        {
            resposta++;
        }
    }
    return resposta-1;
}