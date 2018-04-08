#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Digite dois numeros: ");
    scanf("%d%d",&n1,&n2);

    if(n1==n2){
        printf("Os numeros digitados sao iguais");
    }else{
        if(n1<n2){
          printf("O segundo numero que foi o %d e maior que o primeiro digitado que foi o %d",n2,n1);
        }else{
          printf("O primeiro numero que foi o %d e maior que o segundo digitado que foi o %d",n1,n2);
        }
    }
    return 0;
}
