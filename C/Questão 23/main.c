#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,media,peso1,peso2;

    printf("Digite nota 1: ");
    scanf("%f",&nota1);
    printf("Digite nota 2: \n");
    scanf("%f",&nota2);
    printf("peso 1: \n");
    scanf("%d",&peso1);
    printf("peso 2: \n");
    scanf("%d",&peso2);

    media = ((nota1*peso1)+(nota2*peso2))/(peso1+peso2);

    printf("A media eh: %f",media);


    return 0;
}
