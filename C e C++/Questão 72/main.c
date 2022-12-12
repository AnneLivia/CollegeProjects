#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,q=0;
    printf("Digite um numero: ");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        if(j%i == 0){
            q = q+1;
        }
    }
    if(q==j){
        printf("PRIMO");
    }else{
        printf("NAO E PRIMO");
    }
    return 0;
}
