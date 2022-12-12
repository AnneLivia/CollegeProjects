#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    printf("Digite um nome: ");
    gets(nome);
    strrev(nome);
    printf("Seu nome ao contrario: ");
    puts(nome);
    return 0;
}
