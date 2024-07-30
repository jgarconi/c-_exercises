/*
    Arquivo: cadastraAluno.cpp
    Objetivo: Utilizar funções para criar um registro do tipo
              aluno com matrícula e nota, registrar um aluno
              e retornar seus dados.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

struct aluno
{
  int matricula;
  float nota;
};

int main()
{
    aluno a1;
    aluno *pt;

    pt = &a1;
     
    cout << "Insira a matrícula do aluno: ";
    cin >> pt->matricula;
    cout << "Insira a nota do aluno: ";
    cin >> pt->nota;

    while(pt->nota < 0 || pt->nota > 10)
    {
        cout << "Erro! Insira uma nota entre 0 e 10: ";
        cin >> pt->nota;
    }

    cout << "O aluno com matrícula " << pt->matricula << " tem nota " << pt->nota << endl;

    return 0;
}
