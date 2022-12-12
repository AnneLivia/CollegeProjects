#include <stdio.h>
#include <ctype.h>
#define MAX 100

void mm(int vet[], int n, int *min, int *max)
{
    int i,minimo, maximo;
    minimo = vet[0];
    maximo = vet[0];
    for(i = 0; i < n - 1;i++)
    {
        if(minimo > vet[i] )
        {
            minimo = vet[i];
        }
        if(maximo < vet[i])
        {
            maximo = vet[i];
        }
    }
     *min = minimo;
     *max = maximo;
}

int main()
{
    int i = 0,vetor[MAX],Minimo,Maximo;

    char sair = 'N';

    while(toupper(sair) != 'S')
    {
        printf("Digite o valor para o vetor: ");
        scanf("%d",&vetor[i]);
        setbuf(stdin,NULL);
        printf("Voce deseja sair? se sim digite S se nao digite qualquer numero.\n");
        sair = getchar();
        i++;
    };
    i++;
    printf("%d\n",i);
    mm(vetor,i,&Minimo,&Maximo);

   printf("\nMinimo = %d\nMaximo = %d",Minimo,Maximo);
   return 0;
}
