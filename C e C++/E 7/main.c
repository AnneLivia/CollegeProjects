#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5],i,j,temporario;

    for(i = 0;i < 5;i++){
        printf("Digite um numero: ");
        scanf("%d",&numero[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = i; j < 5;j++){
            if(numero[i] > numero[j]){
                temporario = numero[i];
                numero[i] = numero[j];
                numero[j] = temporario;
            }
        }
    }

    for(i = 0;i < 5;i++){
        printf("%d ",numero[i]);
    }

    return 0;
}
