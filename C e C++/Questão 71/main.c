#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opt;
    int n,ma = 0,me = 1000;
    do{
       printf("Para encerrar o calculo digite 0\n");
       printf("Digite um numero: ");
       scanf("%d",&n);

       if(n<0){
         printf("\nValores negativos e nulos nao farao parte do calculo\n");
       }

       if(n>0){
         if(n>ma){
            ma = n;
         }
         if(n<me){
            me = n;
         }
       }


    }while(n != 0);
    printf("\nO maior valor digitado e %d\nO menor valor digitado e %d",ma,me);
    return 0;
}
