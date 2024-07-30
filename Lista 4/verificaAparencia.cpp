/*
    Arquivo: verificaAparencia.cpp
    Objetivo: Receber se o engenheiro fez a barba e cortou o cabelo
              na semana e retornar a mensagem adequada.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 24 de setembro de 2023
    Versão: 1
*/

#include <iostream>

using namespace std;

int main()
{
    int semana = 0;
    char cabelo, barba;
    // Variáveis referentes ao cabelo
    int naoCortouCabelo = 0, cortouCabelo = 0;
    // Variáveis referentes à barba
    int naoFezBarba = 0, fezBarba = 0;

    while(true){
        semana++;

        cout << "---------------------------------------------" << endl;
        cout << "Semana " << semana << ":" << endl;

        cout << "Já fez a barba? (s/n)\n";
        cin >> barba;
        barba = tolower(barba);

        cout << "Já cabelo o cabelo? (s/n)\n";
        cin >> cabelo;
        cabelo = tolower(cabelo);

        // Verifica se cortou a barba
        switch(barba){
            case 's':
            fezBarba++;
            naoFezBarba = 0;
            break;

            case 'n':
            naoFezBarba++;
            fezBarba = 0;
            break;

            default:
            cout << "Opção Incorreta!\n";
            return 1;
        }

        // Verifica se cortou cabelo
        switch(cabelo){
            case 's':
            cortouCabelo++;
            naoCortouCabelo = 0;
            break;

            case 'n':
            naoCortouCabelo++;
            cortouCabelo = 0;
            break;

            default:
            cout << "Opção Incorreta!\n";
            return 1;
        }

        // Verifica se a barba e cabelo foram feitos na semana 
        if(fezBarba >= 1 && cortouCabelo >= 1){
            cout << "Você está com aparência de galã!\n";
        }
        else if(naoFezBarba > 8 && cortouCabelo >= 1){
            cout << "Você poderá ser confundido com o papai Noel!\n";
        }
        else if(fezBarba >= 1 && naoCortouCabelo > 8){
            cout << "Você poderá ser confundido com o Sansão!\n";
        }
        else if(naoFezBarba > 8 && naoCortouCabelo > 8){
            cout << "Você está com aparência de lobisomem e poderá levar marretadas!\n";
            break;
        }
    }
    return 0;
}