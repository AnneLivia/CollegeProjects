#include <stdio.h>
#include <stdlib.h>
int main()
{
   int vetor[100];
   int quantValores = 0,i,valor;

   for(i = 0; i < 100; i++)
   {
       printf("Digite um valor: ");
       scanf("%d",&valor);
       if(valor != 0)
       {
          vetor[i] = valor;
          quantValores +=1;
       }
       else
       {
           break;
       }
   }
   printf("%d",quantValores);
   printf("\n\nValores digitados.\n\n");
   for(i = 0; i < quantValores; i++)
   {
     printf("%d ",vetor[i]);
   }
   int j;
   int aux;
   i = 0;
   j = quantValores - 1;
   while(i <= j && j != i)
   {
       aux = vetor[i];
       vetor[i] = vetor[j];
       vetor[j] = aux;

       i++;
       j--;
   }

   printf("\n\nValores invertidos.\n\n");

   for(i = 0; i < quantValores; i++)
   {
     printf("%d ",vetor[i]);
   }

    return 0;
}
