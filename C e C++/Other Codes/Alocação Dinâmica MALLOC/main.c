#include <stdio.h>
#include <stdlib.h>
/*
   Utilizando MALLOC para alocação dinâmica.
   ela faz um pedido de memoria ao computador e retorna um ponteiro com o endereço
   de onde inicia na memoria.

   prototipo:

   void* malloc(unsigned int num);



*/

int main()
{

   int *p;
   p = (int *) malloc(5 * sizeof(int));

   if(p == NULL)
   {
      printf("Erro: sem memoria suficiente para alocacao");
      exit(1);
   }

   int i;
   int j;
   int aux;
   printf("Carregamento de valores\n");
   for(i = 0; i < 5; i++)
   {
       printf("Digite um valor: ");
       scanf("%d",&p[i]);
   }

   for(i = 0; i < 5; i++)
   {
       for(j = 0; j < 5; j++)
       {
            if(p[j] > p[i])
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
       }
   }
   printf("Valores ordenados\n");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",p[i]);
   }

   free(p);
   return 0;
}

