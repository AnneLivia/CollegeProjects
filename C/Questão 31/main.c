#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioM,qwatts,cadawatts,pagar,desconto;

    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salarioM);
    cadawatts = (salarioM * 2/100);
    printf("Quanto gasta sua residencia? ");
    scanf("%f",&qwatts);
    printf("O valor de cada Quilowatts equivale a %.2f\n",cadawatts);
    pagar = cadawatts*qwatts;
    printf("O total a pagar por sua residencia: %.2f",pagar);
    desconto = pagar - (pagar * 15/100);
    printf("\nO valor a ser pago com um desconto de 15%% equivale a %.2f",desconto);

    return 0;
}
