#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j;
    j = 2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    while(n % j != 0 && j <= n){
        j +=1;
    }
    if(j==n){
        printf("Primo");
    }else{
        printf("Nao e primo");
    }
    return 0;
}
