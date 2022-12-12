#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,imposto;
    printf("Qual seu salario? ");
    scanf("%f",&salario);
    imposto = (salario * 5/100);
    printf("\nO imposto de renda a ser pago e %.2f",imposto);
    return 0;
}
