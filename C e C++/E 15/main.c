#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chico,ze;
    int ano = 0;
    chico = 1.50;
    ze = 1.10;

    while(chico >= ze){
        chico += 0.02;
        ze += 0.03;
        ano +=1;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico\nAltura de Ze: %.2f"
           "\nAltura de Chico: %.2f",ano,ze,chico);
    return 0;
}
