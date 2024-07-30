/*
    Arquivo: maiorElementoPorColuna.cpp
    Objetivo: Receber os elementos de uma matriz 2x2 e
              retornar o maior número de cada coluna.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 28 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int m[2][2];
    int maior0, maior1 = 0;
    int i, j;

    // Entrada de dados da matriz
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout << "Insira o elemento [" << i << "][" << j << "] da matriz: ";
            cin >> m[i][j];
        }
    }

    // Define as referências
    maior0 = m[0][0];
    maior1 = m[0][1];

    for(i=0; i<2; i++)
    {
        // Encontra maior elemento da coluna 0
        if(m[i][0] > maior0)
        {
            maior0 = m[i][0];
        }

        // Encontra maior elemento da coluna 1
        if(m[i][1] > maior1)
        {
            maior1 = m[i][1];
        }
    }

    cout << "Maior elemento da coluna 0: " << maior0 << endl;
    cout << "Maior elemento da coluna 1: " << maior1 << endl;

    return 0;
}