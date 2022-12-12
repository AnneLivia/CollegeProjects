#include <stdio.h>
#include <stdlib.h>
#define  TAM 5
#define  VERDADEIRO 1
#define  FALSO 0


int main()
{
    // Proctope
    void lerVetor(int *p, const int n);
    void imprimirVetor(int *p,const int n);

    int vetor[TAM],change = FALSO, finals = TAM, guardar,i;

    printf("Digite os valores do vetor.\n");
    lerVetor(vetor,TAM);

    do{
        change = FALSO;
        for(i = 0; i < TAM; i++)
        {
            if(vetor[i]>vetor[i+1])
            {
                guardar = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = guardar;
                change = VERDADEIRO;
            }
        }

    }while(change);

    imprimirVetor(vetor,TAM);

    return 0;
}

void lerVetor(int *p,const int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
      printf("Vetor[%d]: ",i);
      scanf("%d",&p[i]);
  }
}

void imprimirVetor(int *p, const int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",p[i]);
    }
}
