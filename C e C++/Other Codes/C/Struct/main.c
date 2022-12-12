#include <stdio.h>
#include <stdlib.h>
struct pessoa{
     char nome[50],rua[50];
     int idade,numero;
    };
int main()
{

    struct pessoa p;
    scanf("%d",&p.idade);
    gets(p.nome);
    p.numero = p.numero + p.idade - 100;
    printf("%d",p.numero);


    return 0;
}
