#include <iostream>

using namespace std;

typedef struct Pessoa{
   private:
       int idade;
       string nome;

   public:
        Pessoa(int idade)
        {
            this->idade = idade;
        }

        Pessoa(int idade, string nome);

        void setIdade(int idade)
        {
            this->idade = idade;
        }

        int getIdade()
        {
            return this->idade;
        }

        void setNome(string nome)
        {
            this->nome = nome;
        }
        string getNome()
        {
            return this->nome;
        }


}Pessoa;

Pessoa::Pessoa(int idade, string nome){
    this->idade = idade;
    this->nome = nome;
}
int main()
{
    Pessoa p(18,"Livia");
    cout << "Nome: " << p.getNome() << endl;
    cout << "Idade: " << p.getIdade() << endl;

    return 0;
}
