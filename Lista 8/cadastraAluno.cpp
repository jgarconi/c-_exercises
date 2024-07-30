/*
    Arquivo: cadastraAluno.cpp
    Objetivo: Utilizar funções para criar um registro do tipo
              aluno com matrícula e nota, registrar um aluno
              e retornar seus dados.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 14 de novembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

struct aluno
{
  int matricula;
  float nota;
};

aluno cadastraAluno(aluno a);
void retornaRegistro(aluno b);

int main()
{
    aluno a, b;
     
    b = cadastraAluno(a);

    retornaRegistro(b);
}

aluno cadastraAluno(aluno a)
{
    cout << "Insira a matrícula do aluno: ";
    cin >> a.matricula;
    cout << "Insira a nota do aluno: ";
    cin >> a.nota;

    while(a.nota < 0 || a.nota > 10)
        {
            cout << "Erro! Insira uma nota entre 0 e 10: ";
            cin >> a.nota;
        }
    
    return a;
}

void retornaRegistro(aluno b)
{
    cout << "O aluno com matrícula " << b.matricula << " tem nota " << b.nota << endl;
}