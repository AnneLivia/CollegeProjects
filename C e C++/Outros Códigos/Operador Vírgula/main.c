#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operacao com o operador virgula. \n");
    int y,x;
    y = (x = 16,x + 4);
    printf("Y = %d",y);
    return 0;
}
