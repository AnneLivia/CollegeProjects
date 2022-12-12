#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void peso_ideal(char genero,float alt){
  if(toupper(genero) == 'M'){
    printf("Peso ideal: %.2f",(72.7 * alt) - 58);
  }else if(toupper(genero) == 'F'){
    printf("Peso ideal: %.2f",(62.1*alt)-44.7);
  }else{
    printf("Genero invalido");
  }
}

int main()
{
    float altura;
    char gen;

    fflush(stdin);
    printf("Qual seu genero: \nM - Masculino\nF - feminino\nDigite aqui: ");
    gen = getchar();
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    peso_ideal(gen,altura);

    return 0;
}
