#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *y = NULL;
    y = &x;
    printf("Digite um valor para x: ");
    scanf("%d",&x);
    printf("Valor da variavel x: %d\n",x);
    *y = 90; // eu posso alterar o valor contido na variavel que o ponteiro aponta dessa forma
    printf("O endereco da variavel x atraves do ponteiro: %d\n",y);
    printf("O endereco da variavel x: %d\n",&x);
    printf("O valor da variavel x depois da alteracao feita pelo ponteiro: %d\n",*y);

    return 0;
}
