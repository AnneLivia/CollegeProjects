#include <iostream>

using namespace std;
typedef struct{
   int idade;
   char nome[100];
} pessoa;

int main()
{
    pessoa p1{20,"Livia"};

    pessoa *p = &p1;

    cout << "Idade: " << (*p).idade << endl;
    cout << "Nome: " << p->nome << endl;
    return 0;
}
