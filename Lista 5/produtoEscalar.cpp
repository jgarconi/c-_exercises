/*
    Arquivo: produtoEscalar.cpp
    Objetivo: Receber dois vetores de tamanho 3 e retornar
              o produto escalar entre eles.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int v1[3], v2[3], multi[3];
    int i, produto = 0;

    for(i=0; i<3; i++)
    {
        cout << "Insira o " << i+1 << "º número do primeiro vetor: ";
        cin >> v1[i];
    }

    cout << endl;

    for(i=0; i<3; i++)
    {
        cout << "Insira o " << i+1 << "º número do segundo vetor: ";
        cin >> v2[i];
    }

    for(i=0; i<3; i++)
    {
        multi[i] = v1[i]*v2[i];
        produto +=multi[i];
    }


    cout << "\nO produto escalar entre os vetores é " << produto << endl;

    return 0;
}