#include <stdio.h>
#include <stdlib.h>

/*Union serve para reservar um espaço para variaveis que irão ser utilizadas somente uma vez*/
union operacao{
  int mult;
  float divisao;
};

int main()
{
    union operacao n1, n2;
    int opt;
    do{
    printf("\nVocê deseja realizar uma [1]multiplicacao ou uma [2]divisao? \nPara sair do programa digite 4\n");
    scanf("%d",&opt);
    if(opt == 1){
    printf("Digite um valor: ");
    scanf("%d",&n1.mult);
    printf("Digite outro valor: ");
    scanf("%d",&n2.mult);
    printf("Multiplicacao: %d x %d = %d",n1.mult,n2.mult,n1.mult*n2.mult);
    }else if(opt == 2){
    printf("Digite um valor: ");
    scanf("%f",&n1.divisao);
    printf("Digite outro valor: ");
    scanf("%f",&n2.divisao);
    printf("Divisao: %f / %f = %f",n1.divisao,n2.divisao,n1.divisao/n2.divisao);
    }else{
    printf("\a");
    }
    }while(opt!=4);
    return 0;
}
