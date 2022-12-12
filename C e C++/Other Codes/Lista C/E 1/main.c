#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int vetor[MAX], i, valor = 0, contNum1, contNum2;
    contNum1 = contNum2 = 0;

    while(contNum1 < MAX && valor != -1)
    {
         printf("Digite um valor inteiro para o vetor: ");
         scanf("%d",&valor);
         if(valor>=0)
         {
             vetor[contNum1] = valor;
             contNum1++;
         }
    }
    system("cls");
    printf("Foram registrados %d numeros:\n",contNum1);

    for(i = 0; i < contNum1; i++)
    {
        printf("%d ",vetor[i]);
    }

    printf("\n\n");

    for(i = 0; i < contNum1 - 2; i++)
    {
       if(vetor[i] == 1 && vetor[i+1] == 3 && vetor[i+2] == 4)
       {
           contNum2++;
       }
    }

    if(contNum2 == 0)
    {
        printf("Os numeros 1, 3 e 4 nao aparecem nenhuma vez nessa ordem\n");
    }
    else if(contNum2 == 1)
    {
        printf("O numeros 1, 3 e 4 aparecem uma vez nessa ordem\n");
    }
    else
    {
        printf("\nOs numeros 1,3 e 4 aparecem %d vezes nessa ordem.\n",contNum2);
    }



    return 0;
}

