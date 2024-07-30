/*
    Arquivo: calculaDistancia.cpp
    Objetivo: Receber duas coordenadas e retorna a distância
              entre os pontos.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculaDistancia(float x1, float y1, float x2, float y2);

int main()
{
    float x1, y1, x2, y2 = 0;
    float dist = 0;

    cout << "Insira a coordenada x1 do primeiro ponto: ";
    cin >> x1;
    cout << "Insira a coordenada y1 do primeiro ponto: ";
    cin >> y1;
    cout << "Insira a coordenada x2 do segundo ponto: ";
    cin >> x2;
    cout << "Insira a coordenada y2 do segundo ponto: ";
    cin >> y2;

    dist = calculaDistancia(x1, y1, x2, y2);

    cout << "A distância entre os pontos é: " << dist << endl;

    return 0;
}

float calculaDistancia(float x1, float y1, float x2, float y2)
{
    float d = 0;

    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    return d;
}