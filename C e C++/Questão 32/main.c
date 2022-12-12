#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,gramas,engordar;
    printf("=========Conversão de peso KG para GRAMAS=============\n");
    printf("Digite seu peso: KG\n ");
    scanf("%f",&peso);

    gramas = peso*1000;
    engordar = gramas + (gramas*5/100);
    printf("Seu peso em gramas equivale a %.1f\nSe voce engoradar 5%% seu peso sera de %.2f",gramas,engordar);
    return 0;
}
