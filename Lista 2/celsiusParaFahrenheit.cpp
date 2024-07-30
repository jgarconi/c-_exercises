/*
    Arquivo: celsiusParaFahrenheit.cpp
    Objetivo: Receber uma temperatura em graus Celsius e
              retornar sua conversão para graus Fahrenheit.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float tempCelsius, tempFahrenheit;

    cout << "Insira a temperatura em graus Celsius: \n";
    cin >> tempCelsius;

    tempFahrenheit = ((9 * tempCelsius) + 160) / 5;

    cout << "A temperatura em graus Fahrenheit é " << tempFahrenheit << endl;   
    
    return 0;
}