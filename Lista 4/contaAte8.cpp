/*
    Arquivo: contaAte8.cpp
    Objetivo: Receber uma número inteiro (n) e retornar a contagem até
              8 de forma progressiva (n < 8) ou regressiva (n > 8). 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "Insira um número inteiro: \n";
    cin >> n;

    if(n > 8){
        for(i = n; i >= 8; i--){
            cout << i << ' ';
        }
    }
    else{
        for(i = n; i <= 8; i++){
            cout << i << ' ';
        }
    }
    cout << endl;

    return 0;
}