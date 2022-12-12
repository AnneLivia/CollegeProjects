#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j = 1;
    printf("Digite um numero: ");
    scanf("%d",&n);

    for(i = n; i >= 1; i--){
        j = j*i;
    }
    printf("= %d",j);
    return 0;
}
