/*
    Arquivo: somaElementosPorColuna.cpp
    Objetivo: Receber os elementos de uma matriz 3x4 e
              retornar o a soma de cada coluna.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 28 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int m[3][4];
    int soma[4] = {};
    int i, j;

    // Entrada de dados na matriz
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout << "Insira o elemento [" << i << "][" << j << "] da matriz: ";
            cin >> m[i][j];
        }
    }

    // Soma das colunas
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            soma[j] += m[i][j];
        }
    }

    // Exibição das somas das colunas
    cout << "Soma das colunas:" << endl;
    for (i=0; i<4; i++)
    {
        cout << "Coluna " << i << ": " << soma[i] << endl;
    }

    return 0;
}