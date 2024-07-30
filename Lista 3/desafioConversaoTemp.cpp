/*
    Arquivo: desafioConversaoTemp.cpp
    Objetivo: Receber uma temperatura (C, F ou K) e
              retornar a conversão na escalha escolhida. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    float temperatura, conversao;
    char opcao_temp;
    int opcao_conv;

    cout << "Escolha a escala da temperatura: \n";
    cout << "C para Celsius, F para Fahrenheit ou K para Kelvin:\n";
    cin >> opcao_temp;

    switch(opcao_temp){
        case 'C':
        cout << "Insira a temperatura em Celsius a ser convertida:\n";
        cin >> temperatura;
        break;

        case 'F':
        cout << "Insira a temperatura em Fahrenheit a ser convertida:\n";
        cin >> temperatura;
        break;

        case 'K':
        cout << "Insira a temperatura em Kelvin a ser convertida:\n";
        cin >> temperatura;
        break;

        default:
        cout << "Escolha inválida!\n";
        return 1;
    }

    cout << "Agora, escolha uma opção para conversão:\n";
    cout << "1 para ver a temperatura em graus Fahrenheit\n";
    cout << "2 para ver a temperatura em graus Kelvin\n";
    cout << "3 para ver a temperatura em graus Celsius\n";
    cin >> opcao_conv;

    switch(opcao_conv){
        case 1:
        if(opcao_temp == 'C'){
            conversao = (temperatura * 1.8) + 32;
            cout << "A temperatura de C convertida para F é: " << conversao << endl;
        }
        else if(opcao_temp == 'K'){
            conversao = ((temperatura - 273) * 1.8) + 32;
            cout << "A temperatura de K convertida para F é: " << conversao << endl;
        }
        else{
            conversao = temperatura;
            cout << "A temperatura em F é: " << conversao << endl;
        }
        break;
        
        case 2:
        if(opcao_temp == 'C'){
            conversao = temperatura + 273;
            cout << "A temperatura de C convertida para K é: " << conversao << endl;
        }
        else if(opcao_temp == 'F'){
            conversao = (temperatura - 32) * 5/9 + 273;
            cout << "A temperatura de F convertida para K é: " << conversao << endl;
        }
        else{
            conversao = temperatura;
            cout << "A temperatura em K é: " << conversao << endl;
        }
        break;

        case 3:
        if(opcao_temp == 'F'){
            conversao = (temperatura - 32)/1.8;
            cout << "A temperatura de F convertida para C é: " << conversao << endl;
        }
        else if(opcao_temp == 'K'){
            conversao = temperatura - 273;
            cout << "A temperatura de K convertida para C é: " << conversao << endl;
        }
        else{
            conversao = temperatura;
            cout << "A temperatura em C é: " << conversao << endl;
        }
        break;

        default:
        cout << "Escolha inválida!\n";
        break;
    }
return 0;
}