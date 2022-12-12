#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int *n1){
  *n1 = *n1 + 1;
  printf("Valor de N1 agora: %d\n",*n1);
}
int main()
{
    int x;
    x = 1;
    printf("X = %d\n",x);
    printf("Digite um valor para X: ");
    scanf("%d",&x);
    soma_mais_um(&x);
    printf("Agora por causa da passagem por referencia:\nX = %d",x);
    return 0;
}
