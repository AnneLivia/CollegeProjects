#include <stdio.h>
#include <stdlib.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    int cont;
    *maximo = v[0];
    *minimo = v[0];
    for(cont = 0; cont < N; cont++)
    {
        if(*maximo < v[cont])
        {
            *maximo = v[cont];
        }
        if(*minimo > v[cont])
        {
            *minimo = v[cont];
        }
    }
}

int main()
{
    int num,cont,max,min;
    printf("Quantas posicoes tem o vetor ? \n");
    scanf("%d",&num);
    int vetor[num];
    printf("Digite os valores do vetor.\n");
    for(cont=0;cont<num;cont++)
    {
        printf("Vetor[%d] = ",cont);
        scanf("%d",&vetor[cont]);
    }
    maximoMinimo(vetor,num,&max,&min);
    printf("O Maximo e: %d\nO Minimo e: %d",max,min);
    return 0;
}
