#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1,n2,soma,sub,mult;
    char opt;
    float d1,d2,divi;
    do{
    printf("Digite uma opcao: \n");
    printf("[1] SOMA\n[2] DIVISAO\n[3] MULTIPLICACAO\n[4] SUBTRACAO\nDigite aqui: ");
    scanf("%d",&i);


    switch(i){
    case 1 : printf("=========soma==========\n");
             printf("Digite dois numeros: ");
             scanf("%d%d",&n1,&n2);
             soma = n1 + n2;
             printf("%d + %d = %d\n",n1,n2,soma);
             break;
    case 2:  printf("=========DIVISAO==========\n");
             printf("Digite dois numeros: ");
             scanf("%f%f",&d1,&d2);
             divi = d1 / d2;
             printf("%f / %f = %f\n",n1,n2,divi);
             break;
    case 3:  printf("=========MULTIPLICACAO==========\n");
             printf("Digite dois numeros: ");
             scanf("%d%d",&n1,&n2);
             mult = n1 * n2;
             printf("%d * %d = %d\n",n1,n2,mult);
             break;
    case 4:  printf("=========Subtracao==========\n");
             printf("Digite dois numeros: ");
             scanf("%d%d",&n1,&n2);
             sub = n1 - n2;
             printf("%d - %d = %d\n",n1,n2,sub);
             break;
             default : printf("Opcao invalida\n");
    }
    printf("Deseja sair ? (s) \nDigite aqui: ");
    scanf("%s",&opt);
    system("CLS");

    }while(opt != 's');
    printf("Programa finalizado...");
    return 0;
}
