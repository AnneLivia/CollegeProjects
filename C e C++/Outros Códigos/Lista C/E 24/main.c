#include <stdio.h>
#include <stdlib.h>

void troca( float *a, float *b)
{
    *a = *a * 2;
    *b = *b * 4;
}

int main()
{
    float i,j;
    printf("Digite o valor para i: ");
    scanf("%f",&i);
    printf("Digite o valor para j: ");
    scanf("%f",&j);

    printf("Valores antes da funcao troca ser chamada: \ni = %f\nj = %f\n",i,j);
    troca(&i,&j);
    printf("Valores depois da funcao troca ser chamada: \ni = %f\nj = %f\n",i,j);

    return 0;
}
