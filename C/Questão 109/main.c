#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeros[15] = {1.30,1.40,1.50,1.60,1.70,1.80,1.90,1.10,1.11,1.12,1.13,1.14,1.15,1.16,1.17};
    int i,j;
    float maior = numeros[0], menor = numeros[0];

    for(i=0;i<15;i++){
        if(numeros[i]>maior){
            maior = numeros[i];
        }
        if(numeros[i]<maior){
            menor = numeros[i];
        }
    }
    printf("Maior valor: %f\n",maior);
    printf("Menor valor: %f\n",menor);
    return 0;
}
