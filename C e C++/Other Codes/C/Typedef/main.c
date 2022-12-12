#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*O typedef serve para apelidar o nome de uma struct por exemplo ou até mesmo um tipo de dado, da seguinte forma:
typedef nome_struct nome_apelidado */

struct cadastro{
  char nome[50];
  int idade, telefone;
}
typedef cadastro, ficha;
int main()
{
    ficha pessoa1;
    strcpy(pessoa1.nome,"Livia"); // para se passar uma string para um campo da estrutura precisa utilizar a função strcpy - string cp
    printf("Digite sua idade: ");
    scanf("%d",&pessoa1.idade);
    printf("Digite seu telefone: ");
    scanf("%d",&pessoa1.telefone);
    system("CLS");
    printf("Seu nome: ");
    puts(pessoa1.nome);
    printf("Sua idade: %d\n",pessoa1.idade);
    printf("Seu telefone: %d\n",pessoa1.telefone);
    return 0;
}
