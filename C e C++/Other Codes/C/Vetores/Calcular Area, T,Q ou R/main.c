#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void areaT(float x,float y)
{
    float resposta;
    resposta = (x * y)/2.0;
    printf("Resultado de (%.2f x %.2f)/2 = %.2f",x,y,resposta);
}

void areaR(float x,float y){
   float resposta;
      resposta = x * y;
      printf("Resultado de %.2f x %.2f = %.2f",x,y,resposta);
}

void areaQ(float x){
   float resposta;
   resposta = x * x;
   printf("Resultado de %.2f^2= %.2f",x,x,resposta);
}

int main()
{
    float lado1,lado2;
    char fi,FI;

    setbuf(stdin,NULL);

    printf("Digite o nome da area que deseja calcular: \nQ - Quadrado"
                                                        "\nR - Retangulo\n"
                                                         "T - Triangulo\nDigite aqui: ");

    FI = getchar();
    fi = toupper(FI);
    if(fi == 'Q'){
        printf("Digite o valor do lado 1: ");
        scanf("%f",&lado1);
        areaQ(lado1);
    }else if(fi == 'T'){
        printf("Digite o valor do lado 1: ");
        scanf("%f",&lado1);
        printf("Digite o valor do lado 2: ");
        scanf("%f",&lado2);
        areaT(lado1,lado2);
    }else if(fi == 'R'){
        printf("Digite o valor do lado 1: ");
        scanf("%f",&lado1);
        printf("Digite o valor do lado 2: ");
        scanf("%f",&lado2);
        areaR(lado1,lado2);
    }else{
        printf("Invalido");
    }

    return 0;
}
