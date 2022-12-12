#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = '*';
    int i,j,m;

    printf("Digite um numero: ");
    scanf("%d",&m);

    for(i = 1; i <= m; i++){
        for(j = 1;j<i;j++){
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
