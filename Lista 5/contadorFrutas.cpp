/*
    Arquivo: contadorFrutas.cpp
    Objetivo: Receber a quantidade total de plantas e seus tipos e
              retornar a quantidade de cada tipo plantado.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int opcao, quantidade = 0;
    char fruta;

    cout << "Digite o número de frutíferas plantadas: ";
    cin >> n;

    while(n <= 0)
    {
        cout << "Erro! Insira um número maior que 0: ";
        cin >> n;
    }

    char pomar[n];

    cout << "Indique quais frutíferas foram plantadas!\n";
    cout << "(P para Pitanga, C para Cereja, G para Guabiroba)\n";
    cout << endl;

    for(i=0; i<n; i++)
    {
        cout << "Insira a " << i+1 << "ª frutífera plantada: ";
        cin >> fruta;
        fruta = tolower(fruta);
        if(fruta != 'p' && fruta != 'c' && fruta != 'g')
        {
            cout << "\nErro! Indique uma frutífera válida.\n";
            cout << "(P para Pitanga, C para Cereja, G para Guabiroba)\n";
            i--;
        }
        else
        {
            pomar[i] = fruta;
        }
    }

    cout << "Escolha uma opção para ver a quantidade de cada frutífera\n";
    cout << "(1 para Pitanga, 2 para Cereja, 3 para Guabiroba):\n";
    cin >> opcao;

    switch(opcao)
    {
        case 1:
        for(i=0; i<n; i++)
        {
            if(pomar[i] == 'p')
            {
                quantidade++;
            }
        }
        cout << "Quantidade de pitangas plantadas: " << quantidade << endl;
        break;

        case 2:
        for(i=0; i<n; i++)
        {
            if(pomar[i] == 'c')
            {
                quantidade++;
            }
        }
        cout << "Quantidade de cerejas plantadas: " << quantidade << endl;
        break;

        case 3:
        for(i=0; i<n; i++)
        {
            if(pomar[i] == 'g')
            {
                quantidade++;
            }
        }
        cout << "Quantidade de guabiroba plantadas: " << quantidade << endl;
        break;

        default:
        cout << "Opção inválida.\n";
        return 1;
    }

    return 0;
}