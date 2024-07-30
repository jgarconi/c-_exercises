/*
    Arquivo: desconta9Porcento.cpp
    Objetivo: Receber o preço de um produto e retornar
              seu novo valor com o desconto de 9% aplicado.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

const float DESCONTO = 0.09;

int main()
{
    float precoInicial, precoFinal;

    cout << "Insira o preço do produto: \n";
    cin >> precoInicial;
    
    precoFinal = precoInicial - (precoInicial * DESCONTO);

    cout << "O preço do produto aplicando 9\% de desconto é " << precoFinal << endl;

    return 0;
}