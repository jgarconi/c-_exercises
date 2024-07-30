/*
    Arquivo: equacao2Grau.cpp
    Objetivo: Receber os coeficientes de uma equação de segundo
              grau e retornar suas raízes.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void raizes(float a, float b, float c);
float delta(float a, float b, float c);

int main()
{
    float a, b, c;
    float result[2] = {};
    int i;

    cout << "Insira o coeficiente a da equação: ";
    cin >> a;
    cout << "Insira o coeficiente b da equação: ";
    cin >> b;
    cout << "Insira o coeficiente c da equação: ";
    cin >> c;

    raizes(a, b, c);

    return 0;
}

void raizes(float a, float b, float c)
{
    float d, x1, x2 = 0;

    d = delta(a, b, c);
    x1 = ((-b+sqrt(d))/(2*a));
    x2 = ((-b-sqrt(d))/(2*a));

    cout << "As raizes são: {" << x1 << "," << x2 << "}\n";
}

float delta(float a, float b, float c)
{
    float delta;

    delta = pow(b,2)-4*a*c;

    return delta;
}