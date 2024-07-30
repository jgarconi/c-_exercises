/*
    Arquivo: ordenaVetor.cpp
    Objetivo: Receber n números em um vetor e os retornar
              do maior para o menor.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, tmp;

    cout << "Insira a quantidade de números que serão armazenados: ";
    cin >> n;

    while(n <= 1)
    {
        cout << "Erro! Indique um núemro maior que 1: ";
        cin >> n;
    }

    int v[n];

    // Preenche o vetor com os n números
    for(i=0; i<n; i++)
    {
        cout << "Insira o " << i+1 << "º número do vetor: ";
        cin >> v[i];
    }

    // Usa o número da posição i como referência
    for(i=0; i<n; i++)
    {  
        // Observa os números a partir da posição i+1
        for(j=i; j<n; j++)
        {
            // Se o número da posição i+1 for maior que o i
            if(v[j] > v[i])
            {
                // Troca os números de posição
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }

    // Mostra o vetor ordenado
    for(i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}