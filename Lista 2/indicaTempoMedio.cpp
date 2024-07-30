/*
    Arquivo: indicaTempoMedio.cpp
    Objetivo: Receber uma distância (em km), uma velocidade
              (em km/h) e retornar o tempo médio (em minutos)
              para percorrer tal distância.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 07 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

// Quantidades de minutos em uma hora
const int UMA_HORA = 60;

int main()
{
    float distancia, velocidade, tempoMedio;

    cout << "Insira a distância (em km): \n";
    cin >> distancia;
    cout << "Agora, insira a velociade (em km/h): \n";
    cin >> velocidade;

    tempoMedio = (distancia / velocidade) * UMA_HORA;

    cout << "O tempo médio percorrer " << distancia << " km a " 
         << velocidade << " km/h é de " << tempoMedio << " minutos.\n";
    
    return 0;
}