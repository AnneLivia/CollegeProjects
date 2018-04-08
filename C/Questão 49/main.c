#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char senhaO[6] = "ASDFG";
    char senha[10];
    printf("Digite uma senha? ");
    scanf(" %s",&senha);
    if(strcmp(senhaO,senha) == 0){
        printf("acesso liberado");
    }else{
        printf("acesso recusado");
    }
    return 0;
}
