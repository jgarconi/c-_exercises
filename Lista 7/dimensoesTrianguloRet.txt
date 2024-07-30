/*
    Arquivo: dimensoesTrianguloRet.cpp
    Objetivo: Receber os catetos de um triângulo retângulo e
              retornar a hipotenusa e a área calculadas dentro
              de funções.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 06 de novembro de 2023
    Versão: 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void hipotenusa(float a, float b);
float area(float a, float b);

int main()
{
    float cat1, cat2, a;

    cout << "Insira o primeiro cateto do triângulo: ";
    cin >> cat1;
    cout << "Insira o segundo cateto do triângulo: ";
    cin >> cat2;

    hipotenusa(cat1, cat2);

    a = area(cat1, cat2);

    cout << "A área do triângulo é: " << a << endl;

    return 0;
}

void hipotenusa(float a, float b)
{
    float h;

    h = sqrt(pow(a,2) + pow(b,2));

    cout << "A hipotenusa é: " << h << endl;
}

float area(float a, float b)
{
    float area;

    area = (a*b)/2;

    return area;
}