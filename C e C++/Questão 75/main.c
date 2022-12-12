#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fat=1;
    printf("Digite um valor: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fat = i*fat;
    }
    printf("%d! = %d",n,fat);
    return 0;
}
