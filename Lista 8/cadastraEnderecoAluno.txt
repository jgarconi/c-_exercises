/*
    Arquivo: cadastraEnderecoAluno.cpp
    Objetivo: Criar um registro do tipo aluno para cadastrar
              a matrícula, nota e endereço com número da rua e
              casa e retornar todos os dados cadastrados.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 14 de novembro de 2023
    Versão: 1
*/
#include <iostream>
#include <iomanip>

using namespace std;

#define TAM 3

struct endereco
{
  int casa;
  int rua;
};

struct aluno
{
  int matricula;
  float nota;
  endereco e;
};

int main()
{
    aluno turma[TAM];
    
    for(int i=0; i<TAM; i++)
    {
        cout << "Digite a matrícula do " << i+1 << "º aluno: ";
        cin >> turma[i].matricula;
        
        cout << "Digite a nota do " << i+1 << "º aluno: ";
        cin >> turma[i].nota;
        
        cout << "Digite o número da casa do " << i+1 << "º aluno: ";
        cin >> turma[i].e.casa;
        
        cout << "Digite o número da rua do " << i+1 << "º aluno: ";
        cin >> turma[i].e.rua;
        
        cout << endl;
    }
    
    cout << "aluno \tmatrícula \tnota \tcasa \trua\n";
    for(int i=0; i<TAM; i++)
    {
        cout << i+1 << "\t" << turma[i].matricula << "\t \t" << turma[i].nota << "\t";
        cout << turma[i].e.casa << "\t" << turma[i].e.rua << endl;
    }
    return 0;
}