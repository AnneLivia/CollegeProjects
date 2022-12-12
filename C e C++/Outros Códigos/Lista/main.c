#include <stdio.h>
#include <stdlib.h>

struct lista{
    int valor;
    struct lista *proximo; //Ponteiro que aponta para uma variavel do tipo estrutura lista
};

int main()
{
    struct lista n1,n2,n3;
    struct lista *gancho = &n1;

    n1.valor = 10;
    n2.valor = 20;
    n3.valor = 30;

    n1.proximo = &n2;
    n2.proximo = &n3;
    n3.proximo = (struct lista *)0; //Aqui estou dizendo que eu n3 não aponta mais para lugar nenhum

    while(gancho != (struct lista*)0)
    {
        printf("%i\n",(*gancho).valor);
        gancho = gancho->proximo;
    }
    return 0;
}
