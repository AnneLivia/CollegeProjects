#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    float altura,pesoIdeal;
    char genero;
    printf("Qual seu sexo:\nH - Homem\nM - mulher\nDigite aqui: ");
    scanf("%c",&genero);

    switch(genero){
      case 'H' : printf("Qual sua altura? ");
                 scanf("%f",&altura);
                 pesoIdeal = (72.7*altura) - 58;
                 printf("\nSeu peso ideal e %.2fKG",pesoIdeal);
                 break;
     case 'M' :  printf("Qual sua altura? ");
                 scanf("%f",&altura);
                 pesoIdeal = (62.1*altura) - 44.7;
                 printf("\nSeu peso ideal e %.2fKG",pesoIdeal);
                 break;
     default  :  printf("Dado fornecido invalido");

    }
    return 0;
}
