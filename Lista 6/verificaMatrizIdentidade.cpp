/*
    Arquivo: verificaMatrizIdentidade.cpp
    Objetivo: Receber os n elementos de uma matriz nxn e
              retornar se ela é uma matriz identidade ou não.
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

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            // Verifica se a diagonal é formada por 1's
            if(i == j && m[i][j] != 1)
            {
                cnt = 1;
            }
            // Verifica se os demais elementos são 0's
            else if (i != j && m[i][j] != 0)
            {
                cnt = 1;
            }
        }
    }

    // Indica se a matriz é identidade ou não
    if(cnt == 1)
    {
        cout << "Não é matriz identidade!\n";
    }
    else
    {
        cout << "É matriz identidade!\n";
    }

    return 0;
}