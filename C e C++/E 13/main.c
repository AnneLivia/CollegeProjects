#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[2],i,soma;
    float media;

    do{
    soma = 0;
    for(i=0;i<2;i++){
    printf("Digite o %d valor: \n",i + 1);
    scanf("%d",&num[i]);
    soma +=num[i];
    }
    if(soma != 0){
    media = soma/2.0;
    printf("\nMedia dos numeros %d e %d: %.2f\n",num[0],num[1],media);
    }

    }while(num[0] + num[1] != 0);
    printf("\nPrograma finalizado\n");
    return 0;
}
