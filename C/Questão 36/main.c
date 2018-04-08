#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);

    if(n1==n2){
        printf("O numero %d e igual ao numero %d",n1,n2);
    }else if(n1>n2){
        printf("O numero %d e maior que o numero %d",n1,n2);
    }else{
       printf("O numero %d e maior que o numero %d",n2,n1);
    }
    return 0;
}
