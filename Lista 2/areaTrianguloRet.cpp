/*
    Arquivo: areaTrianguloRet.cpp
    Objetivo: Receber os valores dos catetos de um triângulo
              retângulo e retornar sua área.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float cateto1, cateto2, area;

    cout << "Insira os valores dos catetos do triângulo retângulo separados por espaço:\n";
    cin >> cateto1 >> cateto2;
    
    area = (cateto1 * cateto2) / 2;

    cout << "A área do triângulo retângulo é " << area << endl;

    return 0;
}