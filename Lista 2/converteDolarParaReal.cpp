/*
    Arquivo: converteDolarParaReal.cpp
    Objetivo: Receber uma quantidade de dólares, a cotação
              da moeda e retornar o valor convertido em reais.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float quantDolar, cotacao, quantReal;

    cout << "Insira a quantidade de dólares que está no cofre: \n";
    cin >> quantDolar;
    cout << "Agora, insira (em reais) a cotação do dólar do dia: \n";
    cin >> cotacao;

    quantReal = quantDolar * cotacao;

    cout << "O cliente tem R$" << quantReal << " guardados no cofre.\n";
    
    return 0;
}