#include <stdio.h>
#include <stdlib.h>

void somatorio(int inicio,int fim){
     if(inicio <= fim){
        printf("%d ",inicio);
        somatorio(inicio + 1,fim);
     }
}
int main()
{
    int inicial,fina;
    printf("Digite um valor inicial: ");
    scanf("%d",&inicial);
    printf("Digite um valor final: ");
    scanf("%d",&fina);
    if(inicial < fina){
        printf("Somatorio utilizando recursividade\n");
        somatorio(inicial,fina);
    }else{
        printf("Impossivel realizar operacao");
    }
    return 0;
}
