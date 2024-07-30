/*
    Arquivo: cadastraPomar.cpp
    Objetivo: Criar, carregar e retornar os dados registrados
              das plantas de um pomar.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de novembro de 2023
    Versão: 1
*/
#include <iostream>
#include <iomanip>

using namespace std;

struct tipoDataPlantacao
{
  int dia;
  int mes;
  int ano;
};

struct tipoPlanta
{
  string especie;
  tipoDataPlantacao data;
  float quantidade; 
};

int verificaMes(int mes);
int verificaDia(int dia, int mes);

int main()
{
  int n;
  int dia, mes;
  tipoPlanta *ptr;

  cout << "Indique quantas árvores foram plantadas: ";
  cin >> n;

  while(n<=0)
  {
    cout << "Erro! Indique uma quantidade maior que 0: ";
    cin >> n;
  }

  tipoPlanta pomar[n];

  for(int i=0; i<n;i++)
  {
    ptr = &pomar[i];

    cout << "\nCadastro da " << i+1 << "ª Árvore\n\n";

    cout << "Espécie: ";
    cin >> ptr->especie;

    cout << "Mês da plantação: ";
    cin >> mes;
    ptr->data.mes = verificaMes(mes);

    cout << "Dia da plantação: ";
    cin >> dia;
    ptr->data.dia = verificaDia(dia, ptr->data.mes);

    cout << "Ano da plantação: ";
    cin >> ptr->data.ano;

    cout << "Quantidade plantada em kg: ";
    cin >> ptr->quantidade;
  }

  for(int i=0; i<n;i++)
  {
    ptr = &pomar[i];
    
    cout << "\nDados cadastrados da " << i+1 << "ª Árvore\n\n";

    cout << "Espécie: " << ptr->especie << endl;

    cout << "Data da plantação: "
         << ptr->data.dia << "/" << ptr->data.mes
         << "/" << ptr->data.ano << endl;

    cout << "Quantidade plantada: " << ptr->quantidade
         << " kg" << endl;
  }

  return 0;
}

int verificaMes(int mes)
{
  while(mes <= 0 || mes > 12)
  {
    cout << "Erro! Indique um mês válido: ";
    cin >> mes;
  }
  return mes;
}

int verificaDia(int dia, int mes)
{
  if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
  {
    while(dia <= 0 || dia > 31)
    {
      cout << "Erro! Indique um dia válido (1-31): ";
      cin >> dia;
    }
  }
  else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    while(dia <= 0 || dia > 30)
    {
      cout << "Erro! Indique um dia válido (1-30): ";
      cin >> dia;
    }
  }
  else
  {
    while(dia <= 0 || dia > 28)
    {
      cout << "Erro! Indique um dia válido (1-29): ";
      cin >> dia;
    }
  }
  return dia;
}