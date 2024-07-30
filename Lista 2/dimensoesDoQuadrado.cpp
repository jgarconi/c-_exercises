/*
    Arquivo: dimensoesDoQuadrado.cpp
    Objetivo: Receber o tamanho do lado de um quadrado
              e retornar seu perímetro e área.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float lado, perimetro, area;

    cout << "Insira o tamanho do lado do quadraro: \n";
    cin >> lado;

    perimetro = lado * 4;
    area = pow(lado,2);

    cout << "O perímetro do quadrado é " << perimetro << 
            " e sua área é " << area << endl;
       
    return 0;
}