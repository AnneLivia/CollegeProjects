#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, erro = 0;
        do{
            printf("Digite um valor: \n");
            scanf("%d",&n);

            if(!(n <= 46 || n > 119)){
                printf("Voce digitou incorretamente, digite outra vez. \n");
                erro +=1;
            }
            system("pause");
            system("cls");
        }while(!(n<=49|| n > 119));

        if(erro == 0){
            printf("\nVoce digitou o Codigo corretamente.\n");
        }else if(erro == 1){
            printf("\nVoce digitou uma vez incorretamente.\n");
        }else if(erro > 1){
            printf("\nVoce digitou %d vezes incorretamente.\n",erro);
        }
    return 0;
}
