#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,salarioM,quantM;

    printf("Digite qual o seu salário: ");
    scanf("%f",&salario);
    printf("Qual o valor do salario minimo: ");
    scanf("%f",&salarioM);
    quantM = salario/salarioM;
    printf("Voce recebe %f salarios minimos.",quantM);
    return 0;
}
