#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,i;
    int quantMaior = 0;
    for(i=1;i<=3;i++){
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    if(idade>=18){
        quantMaior = quantMaior+1;
    }
    }
    if(quantMaior==0){
        printf("Nenhuma das pessoas dentro do banco de dados tem idade maior ou igual a 18 anos",quantMaior);
    }else if(quantMaior == 1){
        printf("Somente uma pessoa dentro do banco de dados tem idade maior ou igual a 18 anos",quantMaior);
    }else{
        printf("Existem %d pessoas dentro do banco de dados com idade maior ou igual a 18 anos;",quantMaior);
    }
    return 0;
}
