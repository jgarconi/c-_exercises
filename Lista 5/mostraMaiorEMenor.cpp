/*
    Arquivo: mostraMaiorEMenor.cpp
    Objetivo: Receber 5 números inteiros em um vetor
              e retornar o maior entre eles. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int v[5];
    int i = 0;
    int maior, menor = 0;
    
    cout << "Ingresse o 1º número inteiro.\n";
    cin >> v[0];
    maior = v[0];
    menor = v[0];

    for(i=1; i<5; i++)
    {
        cout << "Ingresse o " << i+1 << "º número inteiro.\n";
        cin >> v[i];
        
        // Caso o número ingressado seja maior que o anterior
        if(v[i] > maior)
        {
            // Indica o novo maior número
            maior = v[i];
        }
        
        // Caso o número ingressado seja menor que o anterior
        if(v[i] < menor)
        {
            // Indica o novo menor número
            menor = v[i];
        }
    }
    
    cout << "O maior número é o " << maior << " e o menor é o " << menor << endl;

    return 0;
}