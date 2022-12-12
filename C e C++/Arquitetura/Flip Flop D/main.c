#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D = 0;
    char clock;
    printf("Digite o valor de D: ");
    scanf("%d",&D);
    printf("Pressione a alavanca: w - para cima e depois s - para baixo ");
    scanf(" %c",&clock);
    char cima = clock;
    scanf(" %c",&clock);

    if(cima == 'w' && clock == 's')
    {
        printf("%d %d",D, !(D));
    }
    else
    {
        if(cima == 's' || cima == 'w' && cima == clock)
        {
            printf("%d %d",D,!(D));
        }
    }
    return 0;
}
