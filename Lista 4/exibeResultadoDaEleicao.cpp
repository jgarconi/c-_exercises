/*
    Arquivo: exibeResultadoDaEleicao.cpp
    Objetivo: Receber os votos dos eleitores e retornar o total
              de votos para os candidatos, os nulos e os brancos. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int voto = 0;
    int candidatoA = 0, candidatoB = 0, candidatoC = 0, candidatoD = 0;
    int nulo = 0, branco = 0, total = 0;

    do{
        // Recebe os votos dos eleitores
        cout << "---------------------------------------------" << endl;
        cout << "Ingresse seu voto:\n";
        cout << "Candidato A: 1\n" << "Candidato B: 2\n";
        cout << "Candidato C: 3\n" << "Candidato D: 4\n";
        cout << "Voto nulo: 5\n" << "Voto em Branco: 6\n";   
        cin >> voto;

        // Computa os votos
        switch(voto){
            case 0:
            cout << "Fim da votação!\n";
            break;

            case 1:
            candidatoA++;
            break;

            case 2:
            candidatoB++;
            break;

            case 3:
            candidatoC++;
            break;

            case 4:
            candidatoD++;
            break;

            case 5:
            nulo++;
            break;

            case 6:
            branco++;
            break;

            default:
            cout << "Voto Inválido!\n";
            break;
        }

    }while(voto != 0);

    total = candidatoA + candidatoB + candidatoC + candidatoD + nulo + branco;

    // Mostra o resultado da eleição
    cout << "---------------------------------------------" << endl;
    cout << "Resultado das Eleições:\n";
    cout << "Candidato A: " << candidatoA << endl;
    cout << "Candidato B: " << candidatoB << endl;
    cout << "Candidato C: " << candidatoC << endl;
    cout << "Candidato D: " << candidatoD << endl;
    cout << "Votos nulos: " << nulo << endl;
    cout << "Votos em Branco: " << branco << endl;
    cout << "Total de Votos: " << total << endl;

    return 0;
}