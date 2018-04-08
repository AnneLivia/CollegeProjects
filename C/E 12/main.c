#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,cont;
    long int prod = 1;

    for(i = 92; i <= 1478; i++){
        cont = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                cont +=1;
            }
        }
        if(cont == 2){
         prod = prod * i;
         printf("primo: %d\n",i);
        }
    }
    printf("O produto dos numeros primos entre 92 e 1478 e: %d",prod);


    return 0;
}
