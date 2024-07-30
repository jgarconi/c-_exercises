/*
    Arquivo: mostraMaiorEMenor.cpp
    Objetivo: Receber n números inteiros e retornar o maior e 
              o menor entre eles. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int quantidade, numero;
    int maior, menor;
    int n = 0;
    cout << "Insira a quantidade de números que deseja mostrar:\n";
    cin >> quantidade;

    if(quantidade <= 0){
        cout << "A quantidade deve ser maior que zero.\n";
        return 1;
    }

    cout << "Insira o 1º número inteiro: \n";
    cin >> numero;
    maior = menor = numero;

    while(n < quantidade - 1){
        cout << "Insira o " << n + 2 << "º número inteiro: \n";
        cin >> numero;
        n++;

        // Encontra o maior número
        if(numero > maior){
            maior = numero;
        }
        // Encontra o menor número
        if(numero < menor){
            menor = numero;
        }
    }

    cout << "O maior número é o " << maior << " e o menor é o " << menor;
    cout << endl;

    return 0;
}