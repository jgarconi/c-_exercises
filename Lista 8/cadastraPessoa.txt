/*
    Arquivo: cadastraPessoa.cpp
    Objetivo: Criar um registro do tipo pessoa com id e endereço
              e retornar todos os dados cadastrados.
    Autora: Juliana Garçoni dos Santos
    Matrícula UnB: 18/0113801
    Data: 14 de novembro de 2023
    Versão: 1
*/
#include <iostream>
#include <iomanip>

using namespace std;

struct tipoIdentificacao
{
    string nome;
    int idade;
    char sexo;
};

struct tipoBairro
{
    int rua;
    string nomeBairro;
};


struct tipoEndereco
{
    string cidade;
    tipoBairro bairro;
};

struct tipoPessoa
{
    tipoIdentificacao identificacao;
    tipoEndereco endereco;
};

int main()
{
    tipoPessoa pessoa;

    cout << "Cadastro da Pessoa\n\n";
    
    cout << "Nome: ";
    getline(cin, pessoa.identificacao.nome);
    cout << "Idade: ";
    cin >> pessoa.identificacao.idade;
    cout << "Sexo: ";
    cin >> pessoa.identificacao.sexo;

    cout << "\nCadastro do Endereço\n\n";

    cout << "Cidade: ";
    cin >> pessoa.endereco.cidade;
    cout << "Nome do bairro: ";
    cin.ignore();
    getline(cin, pessoa.endereco.bairro.nomeBairro);
    cout << "Número da rua: ";
    cin >> pessoa.endereco.bairro.rua;

    cout << "\nDados cadastrados:\n\n";

    cout << "Nome: " << pessoa.identificacao.nome << endl;
    cout << "Idade: " << pessoa.identificacao.idade << endl;
    cout << "Sexo: " << pessoa.identificacao.sexo << endl;
    cout << "Cidade: " << pessoa.endereco.cidade << endl;
    cout << "Bairro: " << pessoa.endereco.bairro.nomeBairro << endl;
    cout << "Rua: " << pessoa.endereco.bairro.rua << endl;

    return 0;
}