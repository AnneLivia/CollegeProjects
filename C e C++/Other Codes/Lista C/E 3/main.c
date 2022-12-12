#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m = 0,SomadosTemos = 1,contTemos = 0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d",&n);
    while(n < 0)
    {
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d",&n);
    }

    while(m != n && m <= n)
    {
        m = SomadosTemos + m;
        SomadosTemos+=2;
        contTemos += 1;
    }

    if(m == n)
    {
        printf("A raiz quadrada de %d = %d\n",n,contTemos);
    }
    else
    {
        printf("O numero %d nao e um quadrado perfeito.\n",n);
    }
    return 0;
}
