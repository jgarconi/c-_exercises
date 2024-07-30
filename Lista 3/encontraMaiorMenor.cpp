/*
    Arquivo: encontraMaiorMenor.cpp
    Objetivo: Receber três números reais e retornar o maior
              e menor entre eles. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, maior, menor;

    cout << "Insira três números reais separados por espaço : \n";
    cin >> num1 >> num2 >> num3;

    // Encontra o maior número
    maior = num1;
    if(num2 > maior){
        maior = num2;
    }
    if(num3 > maior){
        maior = num3;
    }

    // Encontra o menor número
    menor = num1;
    if(num2 < menor){
        menor = num2;
    }
    if(num3 < menor){
        menor = num3;
    }

    cout << "O maior número é " << maior << " e o menor é " << menor << endl;

    return 0;
}