/*
    Arquivo: palindromo.cpp
    Objetivo: Receber uma palavra de 3 caracteres
              e retornarse ela é palíndromo.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    string palavra;

    cout << "Insira uma palavra de 3 caracteres: ";
    cin >> palavra;

    while(palavra.length() != 3)
    {
        cout << "Erro! A palavra deve ter 3 caracteres!\n";
        cout << "Insira uma palavra de 3 caracteres: ";
        cin >> palavra;
    }
    
    if(palavra[0] == palavra[2])
    {
        cout << "A palavra é um palíndromo!\n";
    }
    else
    {
        cout << "A palavra não é um palíndromo!\n";
    }

    return 0;
}