#include <stdio.h>
#include <stdlib.h>
#define TAM1 10


void InserirValores(int p[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",&p[i]);
    }
}
int main()
{
    int N[TAM1], M[TAM1],i, P = 0;

    printf("Carregamento de dados do vetor N.\n");
    InserirValores(N,TAM1);
    printf("Carregamento de dados do vetor M.\n");
    InserirValores(M,TAM1);

    for(i = 0; i < TAM1; i++)
    {
        P = N[i] * M[i] + P;
    }

    printf("\nP = %d",P);

    return 0;
}
