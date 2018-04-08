#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[80],nomeMaior[80],nomeMenor[80];
    int idade,maiorIdade,menorIdade,cont = 0;
    maiorIdade=0;
    menorIdade=1000;
    do{
        printf("Digite seu nome: ");
        gets(nome);
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        if(idade==maiorIdade){
            printf("Impossivel realizar conta pois ha duas idades iguais");
            break;
        }else if(idade>maiorIdade){
            maiorIdade = idade;
            strcpy(nomeMaior,nome);
        }
        if(idade==menorIdade){
            printf("Impossivel realizar conta pois ha duas idades iguais");
            break;
        }else if(idade<menorIdade){
            menorIdade = idade;
            strcpy(nomeMenor,nome);
        }
        fflush(stdin);
        cont +=1;
    }while(cont<3);
    if(cont==3){
        printf("A pessoa com a maior idade e %s\n",nomeMaior);
        printf("A pessoa com a menor idade e %s\n",nomeMenor);
    }

    return 0;
}
