#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float meses,dias,horas,minutos;

    printf("Digite sua idade: ");
    scanf("%d",&idade);
    meses = idade * 12;
    dias = idade * 360;
    horas = dias*24;
    minutos = horas * 60;
    printf("Sua idade: %d\nSua idade em meses: %.0f\nSua idade em dias: %.0f\nSua idade em horas: %.0f\nSua idade em minutos: %.0f",idade,meses,dias,horas,minutos);
    return 0;
}
