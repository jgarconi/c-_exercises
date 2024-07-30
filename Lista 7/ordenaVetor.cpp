/*
    Arquivo: ordenaVetor.cpp
    Objetivo: Receber um número n e retornar um vetor de ordem
              n ordenado utilizando funções.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void carregaVetor(int n);
void ordenaVetor(float v[], int n);
void mostraVetorOrdenado(float v[], int n);

int main()
{
    int n = 0;

    cout << "Insira o tamanho do vetor: ";
    cin >> n;

    while (n <= 1)
    {
        cout << "Erro! Escolha um número maior que 1: ";
        cin >> n;
    }

    carregaVetor(n);

    return 0;
}

void carregaVetor(int n)
{
    int i;
    float v[n];

    for(i = 0; i<n; i++)
    {
        cout << "Insira o " << i+1 << "º número do vetor: ";
        cin >> v[i];
    }

    ordenaVetor(v, n);
}

void ordenaVetor(float v[], int n)
{
    int i, j, tmp;

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

    mostraVetorOrdenado(v, n);
}

void mostraVetorOrdenado(float v[], int n)
{
    int i;

    cout << "O vetor ordenado é o:\n[";

    for(i = 0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    
    cout << "]\n";
}