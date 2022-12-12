#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Digite o valor de x: ");
    scanf("%f",&x);
    printf("Digite o valor de y: ");
    scanf("%f",&y);

    if(x==0 && y==0){
        printf("O ponto e nulo");
    }else if(x==0 && y>0){
        printf("O ponto esta no eixo y positivo");
    }else if(x<0 && y>0){
        printf("esta no quadrante 2");
    }else if(x<0 && y==0){
       printf("O ponto esta no eixo x negativo");
    }else if(x<0 && y<0){
       printf("O ponto esta no quadrante 3");
    }else if(x>0 && y<0){
       printf("O ponto esta no quadrante 4");
    }else if(x>0 && y==0){
      printf("O ponto esta no eixo x positivo");
    }else if(x==0 && y<0){
      printf("O ponto esta no eixo y negativo");
    }else if(x>0 && y>0){
      printf("O ponto esta no quadrante 1");
    }
    return 0;
}
