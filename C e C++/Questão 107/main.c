#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,valor[10],quant = 0;
    float media = 0;

    for(i=0;i<10;i++){
    printf("Digite um valor: \n");
    scanf("%d",&valor[i]);
    quant = valor[i]+quant;
    }
    media = quant/10.0;
    printf("Media: %f\n",media);
    for(i=0;i<10;i++){
        if(valor[i]>media){
            printf("Valor do espaco %d: %d\n",i,valor[i]);
        }
    }
    return 0;
}
