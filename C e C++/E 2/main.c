#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a,b,c,delta,raiz1,raiz2;

    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor de b: ");
    scanf("%f",&b);
    printf("Digite o valor de c: ");
    scanf("%f",&c);

    delta = pow(b,2) - 4 * (a * c);
    printf("Valor do delta: %.2f\n",delta);

    if(delta == 0){
        printf("Uma unica raiz real: \n");
        raiz1 = (- b + sqrt(delta))/(2*a);
        printf("Raiz: %.2f",raiz1);
    }else if(delta > 0){
        printf("Existem duas raizes reais: \n");
        raiz1 = (- b + sqrt(delta))/(2*a);
        raiz2 = (- b - sqrt(delta))/(2*a);
        printf("Raiz 1: %.2f\nRaiz 2: %.2f",raiz1,raiz2);
    }else{
        printf("Nao existe raiz real");
    }
    return 0;
}
