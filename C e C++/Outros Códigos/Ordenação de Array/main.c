#include <stdio.h>
#include <stdlib.h>


int main()
{
    int cont1,cont2, vetor[3],aux,posicao;

    printf("--------- Valores do vetor ----------\n");

    for(cont1 = 0;cont1 < 3;cont1++)
    {
        printf("Digite os valores do array na posicao %d: ",cont1);
        scanf("%d",&vetor[cont1]);
    }

    for(cont1 = 0;cont1 < 2;cont1++)
    {
        for(cont2 = cont1 + 1;cont2 < 3;cont2++)
        {
            if(vetor[cont1]>=vetor[cont2]){ // 1 2 3
                aux = vetor[cont1];
                vetor[cont1] = vetor[cont2];
                vetor[cont2] = aux;
            }

        }
    }
    printf("\n--------- Ordenacao dos valores ----------\n");
    for(cont1 = 0;cont1 < 3;cont1++)
    {
        printf("%4d",vetor[cont1]);
    }

    int n;
    printf("\n--------- Pesquisa sequencial ----------\n");
    printf("Digite um valor: ");
    scanf("%d",&n);
    posicao = 1;

    while(posicao < 3 && vetor[posicao] != n){
        posicao +=1;
    }

    if(vetor[posicao] == n){
        printf("Valor %d encontrado na posicao %d",n,posicao);
    }else{
        printf("Valor %d nao encontrado em nenhuma posicao");
    }
    return 0;
}
