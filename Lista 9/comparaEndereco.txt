/*
  Arquivo: comparaEndereco.cpp
  Objetivo: Receber duas variáveis e retornar o conteúdo
            da que tiver maior endereço.
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
    int num1, num2;
    int *maiorEnd;

    cout << "Insira o valor do primeiro número: ";
    cin >> num1;

    maiorEnd = &num1;

    cout << "Insira o valor do segundo número: ";
    cin >> num2;

    if(&num2 > maiorEnd)
    {
        maiorEnd = &num2;
    }

    cout << "Conteúdo do maior endereço: " << *maiorEnd << endl;

    return 0;
}