#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    if(n==0){
        printf("O valor digitado � igual a zero");
    }else if(n>0){
        printf("O valor � positivo");
    }else{
        printf("O valor � negativo");
    }
    return 0;
}
