#include <stdio.h>
#include <stdlib.h>


int main()
{
    int voltas, i, posicao;

    printf("Digite a quantidade de voltas da corrida: ");
    scanf("%d",&voltas);

    float MediadoTempos;
    int vet[voltas], MelhorTempo, somaTempos = 0;

    MelhorTempo = vet[0];

    for(i = 0; i < voltas; i++){
        printf("Digite o tempo da volta No. %d em minutos: ",i+1);
        scanf("%d",&vet[i]);
        somaTempos = somaTempos + vet[i];
        if(MelhorTempo > vet[i]){
            MelhorTempo = vet[i];
            posicao = i+1;
        }
    }

    MediadoTempos = (float)somaTempos/voltas;

    printf("\nO melhor tempo foi de %d minutos\n",MelhorTempo);
    printf("O melhor tempo ocorreu na %d volta\n",posicao);
    printf("A media dos tempos foi %.2f\n",MediadoTempos);

    return 0;
}

