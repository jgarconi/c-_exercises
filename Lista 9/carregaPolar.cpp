/*
    Arquivo: carregaPolar.cpp
    Objetivo: Receber um módulo e um ângulo por meio de uma 
              função e mostrar as coordenadas polares sem usar
              retornos.
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

void carregaPolar(polar *p);

int main()
{
    polar coordPolar;

    carregaPolar(&coordPolar);

    cout << "\nCoordenadas polares\n";
    cout << "Módulo: " << coordPolar.modulo << endl;
    cout << "Ângulo: " << coordPolar.angulo << endl;
    
    return 0;
}

void carregaPolar(polar *p)
{
    double anguloRad = 0;
    double x, y;

    cout << "Digite o módulo: ";
    cin >> p->modulo;
    cout << "Digite o ângulo em graus: ";
    cin >> p->angulo;
}