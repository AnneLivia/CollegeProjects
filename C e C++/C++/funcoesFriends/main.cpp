#include <iostream>
#include <string.h>
/*
   A diferença de private para protected é em relação a herança.
   privado só é acessado na propria classe e as sub-classes não herdam essas funções.
   agora protected as sub-classes podem herdar elas.
*/

/*
   Funções "friend" são funções na qual eu permito que ela utilize alguma função protegida da minha classe
   temos que fazer um prototipo dentro da classe, e fora da classe eu crio ela. eu devo utilizar a palavra reservada friend
   lebrando que as funções friend não fazem parte da classe

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
   friend class Linguagem; // Isso é uma classe amiga

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
