#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct cadastro
{
  char nome[20];
  int idade;
}cadastro;

void preencher(cadastro *cliente)
{
    printf("Nome: ");
    gets(cliente->nome);
    printf("Idade: ");
    scanf("%d",&cliente->idade);
}

void imprimir(cadastro *cliente)
{
  printf("Nome: %s\nIdade: %d",cliente->nome,cliente->idade);
}

/*int main()
{

    cadastro cliente;

    preencher(&cliente);
    imprimir(&cliente);

    /*
    setlocale(LC_ALL,"portuguese");

    int numero = 20;
    int *ponteiro;

    ponteiro = &numero;
    printf("Valor da vari�vel n�mero: %d\n",numero);
    printf("Valor do endere�o do ponteiro: %d\n",ponteiro);
    printf("Valor da vari�vel n�mero acessado atrav�s do ponteiro: %d\n",*ponteiro);
    printf("Endere�o para qual o ponteiro est� apontando: %d\n",&ponteiro);
    *ponteiro = 89;
    printf("Valor da vari�vel n�mero depois da altera��o feita pelo ponteiro: %d\n",numero);



    return 0;
}

*/
