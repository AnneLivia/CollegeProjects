#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Digite o valor de X: ");
    scanf("%d",&x);
    printf("Digite o valor de Y: ");
    scanf("%d",&y);

    z = x>y ? x:y;

    printf("O Maior valor eh %d",z);

    (x>y) ? printf("\nO maior valor eh %d")
               : printf("\nO maior valor eh %d");
    return 0;
}
