#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, erro = 0,p,resto,i,j,contPrimos;

        do{
            printf("Digite um valor: \n");
            scanf("%d",&n);

            if(!(n <= 46 || n > 119)){
                erro +=1;
            }
            system("cls");
            printf("\n20 numeros primos a partir de %d\n",n);
            contPrimos = 0;
            for(i = n + 1; i <= n + 100; i++){
                p = 0;
                for(j = 1; j <= i; j++){
                    resto = i % j;
                    if(resto == 0){
                        p +=1;
                    }
                }
                if(p == 2){
                    contPrimos += 1;
                    if(contPrimos <= 20){
                    printf("Primo: %d\n",i);
                    }
                }
             }
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

