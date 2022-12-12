#include <stdio.h>
#include <stdlib.h>
#define TAM 50
int main()
{
    int vetor[TAM], quantPAR, quantMde5,i;
    quantPAR = quantMde5 = 0;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite um valor: ");
        scanf("%d",&vetor[i]);
    }

    for(i = 0; i < TAM; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            quantPAR+=1;
        }
        if(vetor[i] % 5 == 0)
        {
            quantMde5 +=1;
        }
    }

    if(quantPAR == 0)
    {
        printf("\nNao existe nenhum numero par\n");
    }
    else if(quantPAR == 1)
    {
        printf("\nExiste somente um numero par\n");
    }
    else
    {
        printf("\nExitem %d numeros pares",quantPAR);
    }

    if(quantMde5 == 0)
    {
        printf("\nNao existe nenhum numero multiplo de 5\n");
    }
    else if(quantMde5 == 1)
    {
        printf("\nExiste somente um numero multiplo de 5\n");
    }
    else
    {
        printf("Exitem %d numeros multiplos de 5",quantMde5);
    }


    return 0;
}
