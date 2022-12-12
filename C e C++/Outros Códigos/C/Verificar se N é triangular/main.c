#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,VouF;
    printf("Digite uma valor: \n");
    scanf("%d",&n);

    for(i = 1; i < n; i++)
    {
        if((i * (i + 1) * (i + 2)) == n)
        {
           VouF = 1;
           break;

        }
    }

    if(VouF == 1)
    {
        printf("%d e triangular dos produtos de %d * %d * %d\n",n,i,i+1,i+2);
    }
    else
    {
        printf("%d nao e triangular\n",n);
    }
    return 0;
}
