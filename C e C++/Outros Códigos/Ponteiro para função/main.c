#include <stdio.h>
#include <stdlib.h>

int executa(int (*p)(int,int), int x, int y)
{
    return (p(x,y));
}

int soma(int x, int y)
{
    return x + y;
}

int maior(int x, int y)
{
     return x > y ? x:y;
}



int main()
{
    int x, y;
    printf("Type to numbers: ");
    scanf("%d %d",&x,&y);

    printf("%d + %d = %d\n",x,y,executa(soma,x,y));

    printf("Bigger number between %d and %d is %d",x,y,executa(maior,x,y));
    return 0;
}
