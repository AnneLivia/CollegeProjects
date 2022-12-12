#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float delta,raiz1,raiz2;


    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);
    printf("Digite o valor de c: ");
    scanf("%d",&c);

    delta = pow(b,2)-4*(a*c);
    printf("Delta = %.2f",delta);

    if(delta==0){
        raiz1 = (-b)+sqrt(delta)/(2*a);
        printf("\nA equacao so possui uma raiz real e o valor e igual a %.2f",raiz1);
    }else{
        if(delta<0){
            printf("\nA equacao nao possui raiz real");
        }else{
           raiz1 = (-b)+sqrt(delta)/(2*a);
           raiz2 = (-b)-sqrt(delta)/(2*a);
           printf("\nRaiz 1 = %.2f\nRaiz  2 = %.2f",raiz1,raiz2);
        }
    }
    return 0;
}
