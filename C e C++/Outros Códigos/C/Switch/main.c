#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pont;
    printf("Digite um simbolo de pontua��o: ");
    scanf("%c",&pont);

    switch(pont){
      case '.' : printf("Ponto paragrafo"); break;
      case '?' : printf("Ponto de interrogacao"); break;
      case '!' : printf("Ponto de exclamacao"); break;
      case ',' : printf("Virgula"); break;
      default : printf("Pontua��o digitada invalida");

    }

    return 0;
}
