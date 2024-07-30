/*
    Arquivo: somaMatrizes.cpp
    Objetivo: Receber n elementos de duas matrizes nxn e
              retornar a soma delas.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 28 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    int i, j;

    cout << "Insira a dimensão n das matrizes nxn: ";
    cin >> n;

    while(n <= 1)
    {
        cout << "Erro! Insira um número maior que 1: ";
        cin >> n;
    }

    int m1[n][n] = {};
    int m2[n][n] = {};
    int soma[n][n] = {};

    // Entrada de dados da primeira matriz
    cout << "Matriz 1:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << "Insira o elemento [" << i << "][" << j << "] da 1ª matriz: ";
            cin >> m1[i][j];
        }
    }

    // Entrada de dados da segunda matriz
    cout << "\nMatriz 2:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << "Insira o elemento [" << i << "][" << j << "] da 2ª matriz: ";
            cin >> m2[i][j];
        }
    }

    // Exibe a soma das matrizes
    cout << "\nA soma das matrizes é:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            soma[i][j] = m1[i][j] + m2[i][j];
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}