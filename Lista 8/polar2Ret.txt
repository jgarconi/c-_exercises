/*
    Arquivo: polar2Ret.cpp
    Objetivo: Receber um módulo e um ângulo e retornar os
              valores em coordenadas retângulares.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 14 de novembro de 2023
    Versão: 1
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct polar
{
  double modulo = 0;
  double angulo = 0;
};

void carregaPolar(polar p);
void retornaRet(polar p, double x, double y);

int main()
{
    polar coordPolar;

    carregaPolar(coordPolar);
    
    return 0;
}

void carregaPolar(polar p)
{
    double x, y;

    cout << "Digite o módulo: ";
    cin >> p.modulo;
    cout << "Digite o ângulo em graus: ";
    cin >> p.angulo;

    retornaRet(p, x, y);
}

void retornaRet(polar p, double x, double y)
{
    double anguloRad = 0;

    anguloRad = p.angulo*M_PI/180;

    x = p.modulo*cos(anguloRad);
    y = p.modulo*sin(anguloRad);

    cout << "Coordenadas retangulares: (" << x << ", " << y << ")\n";
}