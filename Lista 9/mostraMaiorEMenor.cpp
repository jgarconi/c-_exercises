/*
    Arquivo: mostraMaiorEMenor.cpp
    Objetivo: Receber 3 números inteiros em e retornar o maior 
              entre eles por meio de uma função e o menor
              usando um ponteiro. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int retornaMaior(int *v, int *menorPtr);

int main()
{
    int v[3];
    int maior, menor;

    for (int i = 0; i < 3; i++)
    {
        cout << "Digite o " << i + 1 << "º número inteiro: ";
        cin >> v[i];
    }

    maior = retornaMaior(v, &menor);

    cout << "Maior número: " << maior << endl;
    cout << "Menor número: " << menor << endl;

    return 0;
}

int retornaMaior(int *v, int *menorPtr)
{
    int maior = v[0];
    *menorPtr = v[0];

    for (int i = 1; i < 3; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }

        if (v[i] < *menorPtr)
        {
            *menorPtr = v[i];
        }
    }

    return maior;
}
