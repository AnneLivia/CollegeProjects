#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    float raio,area;

    printf("Digite o valor do raio: ");
    scanf("%f",&raio);

    area = PI * pow(raio,2);
    printf("Area do circulo: %.2f",area);
    return 0;
}
