#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define Quant 4

struct nome{
  char nome[20];
} typedef nome, nomes;
int main()
{
    setlocale(LC_ALL,"portuguese");
    nomes pessoa[Quant];
    int i;
    char pesquisa[20];
    for(i = 0; i < Quant; i++){
        printf("Digite o nome: ");
        gets(pessoa[i].nome);
    }

    printf("Digite o nome que deseja procurar: ");
    gets(pesquisa);

    i = 0;
    while(i < Quant && strcmpi(pessoa[i].nome,pesquisa) != 0){
        i +=1;
    }
    if(strcmpi(pessoa[i].nome, pesquisa) == 0){
        printf("Nome %s encontrado na posição %d",pesquisa,i);
    }else{
        printf("Nome não encontrado");
    }
    return 0;
}
