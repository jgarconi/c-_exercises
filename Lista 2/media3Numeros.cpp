/*
    Arquivo: media3Numeros.cpp
    Objetivo: Receber 3 números e retornar a média deles.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, media;

    cout << "Insira três núemros separados por espaço: \n";
    cin >> num1 >> num2 >> num3;
    
    media = (num1 + num2 + num3) / 3;

    cout << "A média dos três números é " << media << endl;

    return 0;
}