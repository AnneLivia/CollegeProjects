#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,K, i,j, soma = 0;
    printf("Digite um valor: ");
    scanf("%d",&K);
    while(K < 0)
    {
       printf("Digite novamente um valor inteiro e positivo: ");
       scanf("%d",&K);
    }

    printf("Quantos multiplos de %d voce quer ver ?\n",K);
    scanf("%d",&N);

    while(N < 0)
    {
       printf("Voce digitou um valor negativo.\n");
       printf("Digite novamente quantos multiplos do valor %d voce quer ver ?\n",K);
       scanf("%d",&N);
    }

    printf("Os %d primeiros multiplos de %d sao: \n",N,K);
    for(i = 1; i <= N; i++)
    {
       printf("%d ",K*i);
       soma +=(K*i);
    }

    printf("\nA soma dos %d numeros multiplos de %d e: %d\n",N,K,soma);
    return 0;
}
