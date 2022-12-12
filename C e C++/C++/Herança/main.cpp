#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
protected:
    char* nome;

public:
    Animal(const char* n){
        nome = new char[strlen(n) + 1];
        strcpy(this->nome,n);
    }
    ~Animal()
    {
        delete[] nome;
        nome = 0;
    }

    const char* getNome()
    {
        return this->nome;
    }
};

class Cachorro : public Animal
{
private:

    int idade;

public:
    Cachorro(const char* nome): Animal(nome) //Estou colocando o nome na classe animal
    {
        idade = 0;
    }

    setIdade(int idade){
        this->idade = idade;
    }
    int getIdade()
    {
        return this->idade;
    }
};

int main()
{
    Cachorro dog("Pudle");
    dog.setIdade(12);

    cout << "Nome: " <<  dog.getNome() << endl;
    cout << "Idade: " << dog.getIdade() << endl;
    return 0;
}
