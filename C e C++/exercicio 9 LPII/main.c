#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temporaria,inverso = 0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    temporaria=num;
    do{
    inverso = inverso * 10;
    inverso = inverso + (temporaria%10);
    temporaria = temporaria/10;
    }while(temporaria!=0);
    if(inverso==num){
        printf("Palindromo");
    }else{
        printf("Nao e palindromo");
    }
    return 0;
}
