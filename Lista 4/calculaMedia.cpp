/*
    Arquivo: calculaMedia.cpp
    Objetivo: Receber 3 notas e retornar se o aluno foi aprovado. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, media;

    cout << "Insira a primeira nota: \n";
    cin >> nota1;

    while(nota1 < 0 || nota1 > 10){
        cout << "A nota deve ser entre 0 e 10! Insira novamente:\n";
        cin >> nota1;
    }

    cout << "Insira a segunda nota: \n";
    cin >> nota2;

    while(nota2 < 0 || nota2 > 10){
        cout << "A nota deve ser entre 0 e 10! Insira novamente:\n";
        cin >> nota2;
    }

    cout << "Insira a terceira nota: \n";
    cin >> nota3;

    while(nota3 < 0 || nota3 > 10){
        cout << "A nota deve ser entre 0 e 10! Insira novamente:\n";
        cin >> nota3;
    }

    media = (nota1 + nota2 + nota3)/3;

    if(media >= 5 && media <= 10){
        cout << "O aluno foi aprovado!\n";
    }
    else{
        cout << "O aluno foi reprovado!\n";
    }

    return 0;
}