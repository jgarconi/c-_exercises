/*
    Arquivo: maiorElementoDiagonal.cpp
    Objetivo: Receber os n elementos de uma matriz nxn e
              retornar o maior número da diagonal.
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
    float maior = 0.00;
    int i, j;

    cout << "Insira a dimensão n da matriz nxn: ";
    cin >> n;

    while(n <= 1)
    {
        cout << "Erro! Insira um número maior que 1: ";
        cin >> n;
    }

    float m[n][n];

    // Entrada de dados da matriz
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << "Insira o elemento [" << i << "][" << j << "] da matriz: ";
            cin >> m[i][j];
        }
    }

    // Define a referência
    maior = m[0][0];

    // Encontra maior elemento da diagonal
    for(i=0; i<n; i++)
    {
        if(m[i][i] > maior)
        {
            maior = m[i][i];
        }
    }

    cout << "Maior elemento da diagonal: " << maior << endl;

    return 0;
}