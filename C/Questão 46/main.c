#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,quant5 = 0;
    for(i=98;i>=0;i--){
        if(i % 5 == 0){
            quant5 = quant5 + 1;
        }
    }

    printf("\nA quantidade de numeros menores que 98 e divisiveis por 5 sao %d",quant5);
    return 0;
}
