#include <stdio.h>
#include <stdlib.h>

/**
   NESTE PROGRAMA EST� SENDO FEITO A COPIA DE UM ARQUIVO TXT PARA OUTRO ATRAV�S DE UMA FUN��O ONDE OS PARAMETROS DELA S�O DOIS PONTEIROS DO TIPO 'FILE'
   DETRO DELA FOI USADA A FUN��O FGETS PARA COPIAR O CONTEUDO DE UM ARQUIVO PARA UMA VARIAVEL, DA SEGUINTE FORMA: FGETS(VARIAVEL,TAMANHO,PONTEIRO);
   PARA COPIAR UM TEXTO PARA O OUTRO ARQUIVO FOI USADO A FUN��O FPUTS(VARIAVEL,PONTEIRO);
   PARA CAPTURAR TODO O TEXTO O FGETS FOI USADO DENTRO DO LA�O DE REPETI��O WHILE, AT� QUE N�O TENHA MAIS NADA QUE NESTE CASO � O NULL.
*/
/*
int main()
{
    void copiarConteudo( FILE *pFile1, FILE *pFile2);
    FILE *pFile1 = fopen("C:\\Users\\annel\\Downloads\\Linguagem C\\Arquivos\\texto.txt","r");

    if(pFile1 == NULL)
    {
        printf("Arquivo nao existe.\n");
        return 1;
    }

    FILE *pFile2 = fopen("C:\\Users\\annel\\Downloads\\Linguagem C\\Arquivos\\copiadetexto.txt","w");

    copiarConteudo(pFile1,pFile2);
    fclose(pFile1);
    fclose(pFile2);

    return 0;
}
*/

void copiarConteudo( FILE *pFile1, FILE *pFile2)
{
    char leitor[1000];

    while(fgets(leitor,1000,pFile1) != NULL)
    fputs(leitor,pFile2);
}
