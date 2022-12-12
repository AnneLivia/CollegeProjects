#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,aumento;
    printf("Digite seu salario: ");
    scanf("%f",&salario);

    if(salario<=1200){
        aumento = salario + (salario*50/100);
        printf("Seu salario recebeu um reajuste de 50%%\nSalario inicial: %.2f R$\nSalario com reajuste: %.2f R$",salario,aumento);
    }else{
        aumento = salario + (salario*30/100);
        printf("Seu salario recebeu um reajuste de 30%%\nSalario inicial: %.2f R$\nSalario com reajuste: %.2f R$",salario,aumento);
    }
    return 0;
}
