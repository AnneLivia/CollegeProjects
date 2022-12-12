#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int p = 0;
    for(i=1;i<=5;i++){
        printf("Digite um valor: ");
        scanf("%d",&n);
        if(n<0){
            p=p+1;
        }
    }

    if(p==0){
        printf("Nao foi fornecido nenhum numero negativo");
    }else{
        printf("Foi fornecido %d numeros negativos",p);
    }

    return 0;
}
