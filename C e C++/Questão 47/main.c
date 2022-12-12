#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero: \n");
    scanf("%d",&n);
   ( n % 2 == 0 ) ? printf("PAR")
                  : printf("IMPAR");

    return 0;
}
