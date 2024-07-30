/*
    Arquivo: calculaIMC.cpp
    Objetivo: Receber um peso e uma altura e retornar o IMC. 
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 21 de setembro de 2023
    Versão: 1
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float peso, altura, imc;

    cout << "Insira seu peso em kg: \n";
    cin >> peso;
    cout << "Insira sua altura em m: \n";
    cin >> altura;

    imc = peso/pow(altura,2);

    if(imc < 18.5){
        cout << "Seu IMC é " << imc << " logo, você está abaixo do peso.\n";
    } 
    else if(imc >= 18.5 && imc < 25){
        cout << "Seu IMC é " << imc << " logo, você está com o peso normal.\n";
    } 
    else if(imc >= 25 && imc < 30){
        cout << "Seu IMC é " << imc << " logo, você está acima do peso.\n";
    } 
    else{
        cout << "Seu IMC é " << imc << " logo, você está obeso(a).\n";
    }

    return 0;
}