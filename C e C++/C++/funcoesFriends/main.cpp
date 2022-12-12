#include <iostream>
#include <string.h>
/*
   A diferen�a de private para protected � em rela��o a heran�a.
   privado s� � acessado na propria classe e as sub-classes n�o herdam essas fun��es.
   agora protected as sub-classes podem herdar elas.
*/

/*
   Fun��es "friend" s�o fun��es na qual eu permito que ela utilize alguma fun��o protegida da minha classe
   temos que fazer um prototipo dentro da classe, e fora da classe eu crio ela. eu devo utilizar a palavra reservada friend
   lebrando que as fun��es friend n�o fazem parte da classe

*/
using namespace std;

class LinguagemAmiga;

class Linguagem{

    friend void classeAmiga(Linguagem *l);

protected:
     char nome[];
     LinguagemAmiga *x;

     void MostrarNome()
     {
        cout << this->nome << endl;
     }

public:
    void setNome(const char* nome)
    {
        strcpy(this->nome,nome);
    }

    void MostrarNome2()
    {
        MostrarNome();
    }

    void AcessarLinguagem();
};

void classeAmiga(Linguagem *p)
{
    cout << "Nome: " << p->nome << endl;
}

class LinguagemAmiga{
   friend class Linguagem; // Isso � uma classe amiga

   void mostrarAlgo()
   {
       cout << "Isto e um metodo da classe amiga" << endl;
   }
};

void Linguagem::AcessarLinguagem()
{
        (*x).mostrarAlgo();
}

int main()
{
    Linguagem l;
    l.setNome("Java");
    classeAmiga(&l);

    l.AcessarLinguagem();
    return 0;

}
