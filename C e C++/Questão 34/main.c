#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,delta;
    float raiz1,raiz2;

    printf("Digite o valor de A: \n");
    scanf("%d",&a);
     printf("Digite o valor de B: \n");
    scanf("%d",&b);
     printf("Digite o valor de C: \n");
    scanf("%d",&c);

    delta = b^2-4*(a*c);
    printf("\nO valor de delta = %d",delta);
    if(delta == 0){
        raiz1 = (-b+sqrt(delta))/(2*a);
        printf("\nPossui somente uma raiz: ");
    }else if(delta<0){
        printf("\nNão possui raiz real");
    }else{
        raiz1 = ((-b)+sqrt(delta))/(2*a);
        raiz2 = ((-b)-sqrt(delta))/(2*a);
        printf("\nRaiz 1: %f\nRaiz 2: %f",raiz1,raiz2);
     }
    return 0;
}
