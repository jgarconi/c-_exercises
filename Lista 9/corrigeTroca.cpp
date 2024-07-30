/*
    Arquivo: corrigeTroca.cpp
    Objetivo: Corrigir o código que realiza a troca de valores
              de duas variáveis.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

void troca(int *i, int *j) 
{
    // Correção: *temp -> temp
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "Antes da troca:\n";
    cout << "Primeiro número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;

    troca(&num1, &num2);

    cout << "\nDepois da troca:\n";
    cout << "Primeiro número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;

    return 0;
}