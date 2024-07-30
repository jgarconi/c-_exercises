/*
    Arquivo: somaOuMultiplicaValores.cpp
    Objetivo: Receber dois números inteiros e retornar a soma deles
              caso sejam iguais ou a multiplicação caso contrário. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, resultado;

    cout << "Insira dois números inteiros separados por espaço : \n";
    cin >> num1 >> num2;

    if(num1 == num2){
        resultado = num1 + num2;
        cout << "O resultado da soma dos números é: " << resultado << endl;
    }
    else{
        resultado = num1 * num2;
        cout << "O resultado da multiplicação dos números é: " << resultado << endl;
    }

return 0;
}