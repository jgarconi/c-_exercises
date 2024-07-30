/*
    Arquivo: calculaMediaDoAluno.cpp
    Objetivo: Receber três notas e indicar se o aluno foi aprovado,
              reprovado ou se as entradas estão incoerentes. 
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
    float nota1, nota2, nota3, media;

    cout << "Insira as três notas do aluno separadas por espaço:\n";
    cin >> nota1 >> nota2 >> nota3;

    media = (nota1 + nota2 + nota3)/3;

    if(media >= 5 && media <= 10){
        cout << "O aluno foi aprovado com media " << media << endl;
    }
    else if(media < 5 && media >= 0){
        cout << "O aluno foi reprovado com media " << media << endl;
    }
    else{
        cout << "Entradas incorretas! A média calculada foi de " << media << endl;
    }

    return 0;
}