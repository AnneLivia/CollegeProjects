#include <stdio.h>
#include <stdlib.h>
#define LIM 10
int main()
{
    int vetor[LIM], maximo, minimo, i;

    printf("Digite os valores do vetor.\n");
    for(i = 0; i < LIM; i++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    maximo = vetor[0];
    minimo = vetor[0];

     for(i = 0; i < LIM; i++)
     {
        if(maximo < vetor[i])
        {
            maximo = vetor[i];
        }
        if(minimo > vetor[i])
        {
            minimo = vetor[i];
        }
     }

     printf("\nMaximo: %d\nMinimo: %d",maximo,minimo);



    return 0;
}
