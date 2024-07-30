/*
    Arquivo: produtoVetorial.cpp
    Objetivo: Receber dois vetores (x,y) e retornar o produto
              vetorial entre eles na direção k.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int v1[3], v2[3], multi[2];
    int i, produto = 0;

    for(i=0; i<2; i++)
    {
        cout << "Insira o " << i+1 << "º número do primeiro vetor: ";
        cin >> v1[i];
    }

    cout << endl;

    for(i=0; i<2; i++)
    {
        cout << "Insira o " << i+1 << "º número do segundo vetor: ";
        cin >> v2[i];
    }

    produto = v1[0]*v2[1]-v1[1]*v2[0];


    cout << "O produto escalar entre os vetores é " << produto << "k.\n";

    return 0;
}