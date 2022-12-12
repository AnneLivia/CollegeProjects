#include <iostream>
#include <string.h>

using namespace std;

/*class Pessoa{
 public:
     char nome[100];
     int idade;
};

Posso fazer isso que eu fiz na hora de instaciar um objeto porque os atributos da classe pessoa é publico, porém se fosse private
ou protected, isso não poderia acontecer. para solucionar isso eu devo criar um construtor.

int main()
{
    Pessoa p = {"Livia",20};

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    return 0;
}*/

class Pessoa{
protected:
    char nome[100];
    int idade;
    int * parentes;

public:
    Pessoa(const char* nome, int idade) // Contrutor deve ter o mesmo nome da classe, e ele não tem retorno nenhum, nem mesmo void.
    {
       strcpy(this->nome,nome);
       this->idade = idade;
       parentes = new int[10];

       cout << "Entrou no construtor: " << this->nome << endl;
    }

    pessoa(int idade) //  O Construtor pode ser sobrecarregado
    {
        this->idade = idade;
    }

    char* getNome()
    {
       return this->nome;
    }

    int getIdade()
    {
        return this->idade;
    }

    ~Pessoa()
    {
        cout << "Entrou no destrutor: " << this->nome << endl;
        delete[] parentes; // Uso o destrutor para desalocar memoria, etc.
        /* O Ultimo a entrar é o primeiro a sair, igual a pilha, stack*/
    }
};

int main(){

    Pessoa p[] = {
     {"Livia",20}, {"Luara",26}, {"Socorro",52},
    }; // quando instaciar uma classe com um contrutor definido, eu devo colocar o que o construtor pede.

    //cout << "Nome: " << p.getNome() << endl;
    //cout << "Idade: " << p.getIdade() << endl;

return 0;
}
