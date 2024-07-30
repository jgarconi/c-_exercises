/*
    Arquivo: descontaValorQualquer.cpp
    Objetivo: Receber o preço de um produto, o valor do desconto
              e retornar o novo valor do produto com o desconto 
              aplicado.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float precoInicial, precoFinal, valorDesconto, desconto;

    cout << "Insira o preço do produto: \n";
    cin >> precoInicial;
    cout << "Agora, insira o valor do desconto que deve ser aplicado: \n";
    cin >> valorDesconto;

    precoFinal = precoInicial - valorDesconto;
    desconto = (valorDesconto / precoInicial) * 100;

    cout << "O novo preço do produto é " << precoFinal << 
            " e o desconto dado foi de " << desconto << "%." << endl;

    return 0;
}