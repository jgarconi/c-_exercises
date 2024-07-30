/*
    Arquivo: cadastraTurma.cpp
    Objetivo: Criar um registro do tipo aluno com matrícula e
              nota, registrar três alunos e retornar seus dados.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

#define TAM 3

struct aluno
{
  int matricula;
  float nota;
};

int main()
{
    aluno turma[TAM];
    aluno *ptr;
    int i;

    for(i=0; i<TAM; i++)
    {
        ptr = &turma[i];

        cout << "Cadastro do " << i+1 << "º aluno:\n";
        cout << "Insira a matrícula: ";
        cin >> ptr->matricula;
        cout << "Insira a nota: ";
        cin >> ptr->nota;

        while(ptr->nota < 0 || ptr->nota > 10)
        {
            cout << "Erro! Insira uma nota entre 0 e 10: ";
            cin >> ptr->nota;
        }
        
        cout << endl;
    }
   
    cout << "Dados dos alunos cadastrados:\n";
    cout << "Aluno \tMatrícula \tNota\n";
    for(i=0; i<TAM; i++)
    {
        ptr = &turma[i];

        cout << i+1 << "\t" << ptr->matricula << "\t \t";
        cout << ptr->nota << endl;
    }

    return 0;
}