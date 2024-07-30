/*
    Arquivo: ordenaVetor.cpp
    Objetivo: Receber 3 números inteiros e os retornar ordenados.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int ordenaVetor(int *v);

int main()
{
    int v[3];
    int i, verifVetor;

    for(i=0; i<3; i++)
    {
        cout << "Insira o " << i+1 << "º número: ";
        cin >> v[i];
    }

    verifVetor = ordenaVetor(v);

    if(verifVetor == 1)
    {
        cout << "O vetor é formado por valores iguais.\n";
    }
    else
    {
        cout << "O vetor ordenado é: [" << v[0] << " "
             << v[1] << " " << v[2] << "]\n";
    }

    return 0;
}

int ordenaVetor(int *v)
{
    int i, j, tmp;
    int verifVetor;

    // Usa o número da posição i como referência
    for(i=0; i<3; i++)
    {  
        // Observa os números a partir da posição i+1
        for(j=i; j<3; j++)
        {
            // Se o número da posição i+1 for maior que o i
            if(v[j] < v[i])
            {
                // Troca os números de posição
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }

    // Verifica se o vetor possui números diferentes
    if (v[0] == v[1] && v[1] == v[2])
    {
        verifVetor = 1;
    }
    else
    {
        verifVetor = 0;
    }

    return verifVetor;
}