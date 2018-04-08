#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Digite o numero equivalente aos dias da semana sabendo que vai de 1 a 7: ");
    scanf("%d",&dia);

    switch(dia){
      case 1 : printf("Domingo - Final de semana"); break;
      case 2 : printf("Segunda-feira - Dia util"); break;
      case 3 : printf("Terca-feira - Dia util"); break;
      case 4 : printf("Quarta-feira - Dia util"); break;
      case 5 : printf("Quinta-feira - Dia util"); break;
      case 6 : printf("Sexta-feira - Dia util"); break;
      case 7 : printf("Sabado - Final de semana"); break;
      default : printf("Numero referente aos dias da semana invalido");

    }
    return 0;
}
