#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, somatorio,num,quantPar;
    somatorio = quantPar = 0;
    for(i=1;i<=4;i++){
        printf("Digite o %d numero: ",i);
        scanf("%d",&num);
        if(num%2==0){
        somatorio = somatorio + num;
        quantPar=quantPar+1;
        }
    }
    if(quantPar == 0){
        printf("Impossivel realizar o calculo da media");
    }else{
        printf("Media: %.2f",(float)somatorio/quantPar);
    }
    return 0;
}
