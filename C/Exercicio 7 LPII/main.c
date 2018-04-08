#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,resto;
    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);

    if(a%b==0){
        printf("O valor de A(%d) e multiplo de B(%d)",a,b);
    }else if(b%a==0){
       printf("O valor de A(%d) e divisor de B(%d)",a,b);
    }else{
       printf("O valor de A(%d) nao e nada para B(%d)",a,b);
    }


    return 0;
}
