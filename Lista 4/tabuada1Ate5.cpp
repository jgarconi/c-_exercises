/*
    Arquivo: tabuada.cpp
    Objetivo: Mostrar a tabuada do 1 até o 5. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    for(i = 1; i <= 5; i++){
        cout << "------------\n";
        cout << "Tabuada do " << i << endl;
        for(j = 1; j <= 10; j++){
            cout << i << "x" << j << "=" << i * j << endl;
        }
    }
    return 0;
}