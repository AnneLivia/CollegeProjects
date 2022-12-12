#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float salario,novosalario;
    char cargo;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("Qual seu cargo:\n[T] tecnico\n[G] gerente\n[O] Outro cargo\nDigite Aqui: ");
    fflush(stdin);
    cargo = getchar();
    cargo = toupper(cargo);
    switch(cargo){
      case 'T' : novosalario = salario + (salario * 50/100);
                 printf("Seu novo salario com almento de 50%%: %.2f",novosalario);
                 break;
      case 'G' : novosalario = salario + (salario * 30/100);
                 printf("Seu novo salario com almento de 30%%: %.2f",novosalario);
                 break;
      case 'O' : novosalario = salario + (salario * 20/100);
                 printf("Seu novo salario com almento de 20%%: %.2f",novosalario);
                 break;
      default : printf("Cargo Invalido");
    }

    return 0;
}
