/*
    Arquivo: mostraAreaOuPerimetro.cpp
    Objetivo: Receber os lados de um retângulo e retornar àrea,
              perímetro ou mensagem de erro. 
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
    float lado1, lado2, area, perimetro;
    char opcao;
    
    cout << "Insira os lados do retângulo: \n";
    cin >> lado1 >> lado2;

    if(lado1 < 0 || lado2 < 0){
        cout << "Insira um valor positivo válido! \n";
        return 1;
    }
    else{
        cout << "Escolha uma opção: \n";
        cout << "A para área ou P para o perímetro. \n";
        cin >> opcao;
    }

    switch(opcao){
        case 'A':
        area = lado1 * lado2;
        cout << "A área do retângulo é: " << area << endl;
        break;

        case 'P':
        perimetro = (2 * lado1) + (2 * lado2);
        cout << "O perímetro do retângulo é: " << perimetro << endl;
        break;

        default:
        cout << "Escolha inválida!\n";
        break;
    }

    return 0;
}