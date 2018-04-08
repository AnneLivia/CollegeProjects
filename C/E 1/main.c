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
        printf("O valor digitado é igual a zero");
    }else if(n>0){
        printf("O valor é positivo");
    }else{
        printf("O valor é negativo");
    }
    return 0;
}
