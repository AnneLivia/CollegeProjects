#include <stdio.h>
#include <stdlib.h>
#define TAM1 5
#define TAM2 8
int main() {

    int vetA[TAM1], vetB[TAM2];
    int i, j;
    printf("Entrada de dados no vetor A.\n");
    for(i = 0; i < TAM1; i++)
    {
        printf("Vetor A[%d]: ",i);
        scanf("%d",&vetA[i]);
    }
    printf("Entrada de dados no vetor B.\n");
    for(i = 0; i < TAM2; i++)
    {
        printf("Vetor A[%d]: ",i);
        scanf("%d",&vetB[i]);
    }
    int vetC[TAM1];
    int cont = 0;
    for( i = 0; i < TAM1; i++)
    {
        for(j = 0; j < TAM2; j++)
        {
            if(vetA[i] == vetB[j])
            {
               vetC[cont] = vetA[i];
            }
        }
        if(vetC[cont] == vetA[i])
        {
           cont++;
        }
    }
    for(i = 0; i < cont; i++)
    {
        printf("%d ",vetC[i]);
    }
    return 0;
}



