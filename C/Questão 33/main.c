#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual,anoNasc,idade,semanas;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%d",&anoNasc);
    printf("Digite o ano Atual: ");
    scanf("%d",&anoAtual);
    idade = anoAtual - anoNasc;
    semanas = idade * 52;
    printf("Sua idade: %d\nSua idade em semanas: %d",idade,semanas);
    return 0;
}
