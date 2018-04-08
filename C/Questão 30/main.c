#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,aumento;

    printf("Qual seu salario? \n");
    scanf("%f",&salario);
    aumento = salario + (salario*25/100);
    printf("Voce recebeu um aumento de 25%% e agora seu salario equivale a %.2f",aumento);
    return 0;
}
