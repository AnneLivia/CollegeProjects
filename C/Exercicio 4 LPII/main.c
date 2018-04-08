#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    if(idade>=5 && idade<=7){
        printf("Categoria A");
    }else if(idade>=8 && idade <=10){
        printf("Categoria B");
    }else if(idade>=11 && idade<=13){
        printf("Categoria C");
    }else if(idade>=14 && idade<=18){
        printf("Categoria D");
    }else if(idade>18){
        printf("Categoria E");
    }else{
        printf("Sua idade nao esta em nenhuma das categorias");
    }
    return 0;
}
