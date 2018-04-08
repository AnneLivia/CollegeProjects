#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    if(n%2==0 && n>=0){
        printf("PAR e POSITIVO");
    }else if(n%2==0 && n<0){
        printf("PAR e NEGATIVO");
    }else if(n>=0){
       printf("IMPAR e POSITIVO");
    }else{
       printf("IMPAR e NEGATIVO");
    }
    return 0;
}
