#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,quantH,QuantM;
    char genero;
    QuantM = quantH = 0;
    float altura,media;
    float maiorAl =  0,menorAL = 1000;
    float somaAL = 0;
    for(i=1;i<=4;i++){
        printf("Qual seu genero: H/M\nDigite aqui: ");
        scanf(" %c",&genero);
        printf("Digite sua Altura: ");
        scanf("%f",&altura);

        if(genero == 'H'){
            quantH = quantH + 1;
        }else if(genero == 'M'){
            QuantM = QuantM + 1;
            somaAL = somaAL + altura;
        }
        if(altura>maiorAl){
            maiorAl = altura;
        }else if(altura < menorAL){
            menorAL = altura;
        }
    }
    system("CLS");
    media = somaAL/QuantM;
    printf("A media das alturas das mulheres e igual a %.2f\n",media);
    printf("A quantidade de homens e %d\n",quantH);
    printf("A menor altura e %.2f\n",maiorAl);
    printf("A menor altura e %.2f",menorAL);
    return 0;
}
