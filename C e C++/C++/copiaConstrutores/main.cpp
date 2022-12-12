#include <iostream>
#include <string.h>

using namespace std;

class Estudante{
public:
    char* nome;

    Estudante(const char* nome)
    {
        cout << "Construindo o objeto" << nome << endl;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam];
        strcpy(this->nome,nome);
    }

    Estudante(const Estudante& e)
    {
        cout << "construindo copia..." << e.nome << endl;
        int tam = strlen(e.nome) + 50;
        this->nome = new char[100];
        strcpy(this->nome,"Copia de ");
        strcat(this->nome,e.nome);
    }

    ~Estudante()
    {
        cout << "Destruindo..." << nome << endl;
        delete []nome;
        nome = 0;
    }

    const char* getNome()
    {
        return nome;
    }


};

void foo2(Estudante e)
{

}

void foo()
{
   Estudante estudante("Joao");
   foo2(estudante);
   cout << "Estudante: " << estudante.getNome() << endl;
}
int main()
{
    foo();
    return 0;
}
