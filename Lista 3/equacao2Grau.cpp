/*
    Arquivo: equacao2Grau.cpp
    Objetivo: Receber os coeficientes a, b e c de uma equação de
              segundo grau e retornar o tipo de raiz. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, delta;
    
    cout << "Insira os coeficientes a, b e c, respectivamente, separados por espaço: \n";
    cin >> a >> b >> c;

    delta = sqrt(pow(b,2) - 4 * a * c);

    if(delta > 0){
        cout << "As raízes são reais e diferentes.\n";
    }
    else if(delta == 0){
        cout << "As raízes são reais de iguais. \n";
    }
    else{
        cout << "As raízes são complexas e conjugadas. \n";
    }

    return 0;
}