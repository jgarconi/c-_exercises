/*
    Arquivo: comparaPessoa1Pessoa2.cpp
    Objetivo: Receber idade e peso de duas pessoas e retornar
              quem é a mais velha e a mais leve. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int idade1, idade2, maior_idade;
    float peso1, peso2,menor_peso;
    string pessoa_mv, pessoa_ml;
    
    cout << "Insira a idade e o peso (em kg) da pessoa 1 separados por espaço: \n";
    cin >> idade1 >> peso1;
    cout << "Insira a idade e o peso (em kg) da pessoa 2 separados por espaço: \n";
    cin >> idade2 >> peso2;

    // Econtra a pessoa mais velha
    maior_idade = idade1;
    pessoa_mv = "Pessoa1";
    if(idade2 > maior_idade){
        maior_idade = idade2;
        pessoa_mv = "Pessoa2";
    }

    // Encontra a pessoa mais leve
    menor_peso = peso1;
    pessoa_ml = "Pessoa1";
    if(peso2 < menor_peso){
        menor_peso = peso2;
        pessoa_ml = "Pessoa2";
    }

    cout << fixed << setprecision(2);

    cout << "A " << pessoa_mv << " é a pessoa mais velha e tem " << maior_idade << " anos.\n";
    cout << "A " << pessoa_ml << " é a pessoa mais leve e tem " << menor_peso << " kg.\n";

    return 0;
}