/*
    Arquivo: cadastraTurma.cpp
    Objetivo: Criar um registro do tipo aluno com matrícula e
              nota, registrar três alunos e retornar seus dados.
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

int main()
{
    aluno turma[3];
    int i;

    for(i=0; i<3; i++)
    {
        cout << "Cadastro do " << i+1 << "º aluno:\n";
        cout << "Insira a matrícula: ";
        cin >> turma[i].matricula;
        cout << "Insira a nota: ";
        cin >> turma[i].nota;

        while(turma[i].nota < 0 || turma[i].nota > 10)
        {
            cout << "Erro! Insira uma nota entre 0 e 10: ";
            cin >> turma[i].nota;
        }
        
        cout << endl;
    }
   
    cout << "Dados dos alunos cadastrados:\n";
    cout << "Aluno \tMatrícula \tNota\n";
    for(i=0; i<3; i++)
    {
        cout << i+1 << "\t" << turma[i].matricula << "\t \t";
        cout << turma[i].nota << endl;
    }
}