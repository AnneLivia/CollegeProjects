#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{

private:
    char nome[200];
    int idade;
    char cpf[10];

public:
    Pessoa(int idade, char nome[])
    {
        this->idade = idade;
        strcpy(this->nome, nome);
    }

    void setIdade(int idade){
       this->idade = idade;
    }

    int getIdade()
    {
        return this->idade;
    }

    void setNome(char nome[])
    {
       strcpy(this->nome,nome);
    }

    char* getNome()
    {
        return this->nome;
    }

    void setCPF(char cpf[])
    {
        strcpy(this->cpf, cpf);
    }

    char* getCPF()
    {
        return this->cpf;
    }
};
int main()
{
    Pessoa p1(18,"Livia");

    cout << "Nome: " << p1.getNome() << endl;
    cout << "Idade: " << p1.getIdade() << endl;
    p1.setCPF("03240202");
    cout << "CPF: " << p1.getCPF() << endl;
    return 0;
}
