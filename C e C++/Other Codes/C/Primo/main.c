#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cont,divisor;

    printf("Digite um valor: ");
    scanf("%d",&n);

    cont = 0;

    for(divisor = 1; divisor <= n; divisor++)
    {
       if(n % divisor == 0)
       {
           cont++;
       }
    }
    if(cont == 2)
    {
      printf("%d e primo",n);
    }
    else
    {
        printf("nao e primo");
    }
    return 0;
}
