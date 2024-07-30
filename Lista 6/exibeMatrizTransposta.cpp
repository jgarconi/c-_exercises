/*
    Arquivo: exibeMatrizTransposta.cpp
    Objetivo: Receber os elementos de uma matriz col x lin
              e retornar sua transpostas.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 28 de outubro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int lin, col;
    int i, j;

    cout << "Insira o núemro de linhas da matriz: ";
    cin >> lin;

    while(lin <= 0)
    {
        cout << "Erro! Insira um número maior que 0: ";
        cin >> lin;
    }

    cout << "Insira o núemro de colunas da matriz: ";
    cin >> col;

    while(col <= 0 || col == lin)
    {
        cout << "Erro! Insira um número maior que 0 e diferente de " << lin << ": ";
        cin >> col;
    }

    float m[lin][col];

    // Entrada de dados da matriz
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            cout << "Insira o elemento [" << i << "][" << j << "] da matriz: ";
            cin >> m[i][j];
        }
    }

    // Ebixe a matriz inserida
    cout << "A matriz inserida foi:\n";
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            cout << fixed << setprecision(2) << m[i][j] << " ";
        }
        cout << endl;
    }

    // Exibe a matriz transposta
    cout << "A matriz transposta é:\n";
    for(i=0; i<col; i++)
    {
        for(j=0; j<lin; j++)
        {
            cout << fixed << setprecision(2) << m[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}