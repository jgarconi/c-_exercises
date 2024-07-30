/*
    Arquivo: trocaValores.cpp
    Objetivo: Utilizar um vetor para trocar os valores de duas
              variáveis e retornar.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int numInt = 0;
    float numReal = 0.0;
    void *pt;

    // Atribua o endereço da variável inteira ao ponteiro
    pt = &numInt;
    // Use o ponteiro para mudar o valor da variável inteira
    cout << "Insira um número inteiro: ";
    cin >> *(int*)pt;

    // Atribua o endereço da variável float ao ponteiro
    pt = &numReal;
    // Use o ponteiro para mudar o valor da variável float
    cout << "Insira um número real: ";
    cin >> *(float*)pt;

    cout << "Novo número inteiro: " << numInt << endl;
    cout << "Novo número real: " << numReal << endl;

    return 0;
}
