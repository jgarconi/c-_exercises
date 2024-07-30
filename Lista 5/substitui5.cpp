/*
    Arquivo: substitui5.cpp
    Objetivo: Receber 5 números inteiros e retornar o vetor
              substituindo os nímeros 5 por 0.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int v[5], i;

    for(i=0; i<5; i++)
    {
        cout << "Insira o " << i+1 << "º número do vetor: ";
        cin >> v[i];

        if(v[i] == 5)
        {
            v[i] = 0;
        }
    }

    for(i=0; i<5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}