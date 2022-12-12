#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[50],nome2[50];
    char p[50],q[50];
    printf("Digite seu nome: ");
    gets(nome1);
    fflush(stdin);
    printf("Digite outro nome: ");
    gets(nome2);
    fflush(stdin);
    strncpy(p,nome1,1);
    strncpy(q,nome2,1);
    if(p<q){
        printf("%s\n%s",nome1,nome2);
    }else{
        printf("%s\n%s",nome2,nome1);
    }
    printf("%c",p);


    return 0;
}
