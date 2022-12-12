#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b,h,area;
    printf("Qual o valor da altura ? ");
    scanf("%f",&h);
    printf("Qual o valor da base ? ");
    scanf("%f",&b);

    area = (b*h)/2;
    printf("A area eh %.2f",area);

    return 0;
}
