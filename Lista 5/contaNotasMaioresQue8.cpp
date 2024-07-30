/*
    Arquivo: contaNotasMaioresQue8.cpp
    Objetivo: Receber 5 notas entre 0 e 10, guardar no vetor e retornar
              quantas notas maiores que 8 existem no vetor.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 25 de outubro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float v[5];
    int i, n = 0;

    for(i=0; i<5; i++)
    {
        cout << "Ingresse a " << i+1 << "ª nota.\n";
        cin >> v[i];

    	if(v[i] < 0 || v[i] > 10)
    	{
    	    cout << "Erro! A nota deve ser entre 0 e 10.\n";
    	    i--;
    	}
        
        if(v[i] > 8)
        {
            n++;
        }
    }
    
    cout << "Existem " << n << " notas maiores de 8 no vetor.\n";

    return 0;
}