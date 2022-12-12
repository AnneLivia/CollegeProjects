#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N;
    char s;
    printf("Digite a quantidade: ");
    scanf("%d",&N);
    setbuf(stdin,NULL);    printf("Digite o simbolo: ");
    s = getchar();
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c",s);

        }
        printf("\n");
    }
    return 0;
}
