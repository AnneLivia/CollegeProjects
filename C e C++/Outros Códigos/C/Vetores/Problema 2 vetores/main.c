#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant;
    printf("Digite a quantidade de valores do vetor: ");
    scanf("%d",&quant);

    int vetor[quant];
    int i;
    for(i = 0; i < quant; i++)
    {
        printf("Digite um valor para o vetor de indice %d: ",i);
        scanf("%d",&vetor[i]);
    }
    system("cls");
    // pesquisa sequêncial.

    int pesquisa;
    printf("Digite o que esta procurando: ");
    scanf("%d",&pesquisa);


    int quantidade = 0;
    for(i = 0; i < quant; i++)
    {
        if(pesquisa == vetor[i])
        {
            printf("Valor %d encontrado na posicao %d.\n",pesquisa,i);
            quantidade +=1;
        }
    }

    if(quantidade == 0)
    {
        printf("Valor %d nao encontrado.\n",pesquisa);
    }
    return 0;
}
