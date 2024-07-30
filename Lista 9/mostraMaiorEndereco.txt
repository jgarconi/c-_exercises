/*
  Arquivo: mostraMaiorEndereco.cpp
  Objetivo: Receber duas variáveis e retornar o maior endereço.
  Autora: Juliana Garçoni dos Santos
  Matrícula UnB: 18/0113801
  Data: 25 de novembro de 2023
  Versão: 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int num1 = 0, num2 = 0;
  int *maiorEnd;

  maiorEnd = &num1;

  if(&num2 > maiorEnd)
  {
    maiorEnd = &num2;
  }

  cout << "Maior endereço: " << maiorEnd << endl;

  return 0;
}