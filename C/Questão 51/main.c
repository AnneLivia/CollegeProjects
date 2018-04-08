#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,desconto;

    printf("Digite seu salario: ");
    scanf("%f",&salario);

    if(salario<=850){
        desconto = salario + (salario * 30/100);
        printf("Seu salario recebeu um aumento de 30%% agora ele equivale a %.2f",desconto);
    }else{
       printf("Voce nao tem direito a aumento pois seu salario e superior a 850 R$");
    }
    return 0;
}
