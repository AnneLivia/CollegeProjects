#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// TESTA COM OS ARQUIVOS QUE EST�O NO PACOTE: escreve texto1.txt e na outro vez texto2.txt
// Se quiser voc� pode dar uma melhorada... se quiser mudar a exten��o de cpp para c, � s� criar um outro arquivo com a exten��o c e copiar tudo daqui pra l�


void escreverFile(FILE *pFile, char *address);

int main()
{
    char address[400];

    FILE *pFile = fopen("Arquivo.txt","w");
    if(pFile == NULL){
        printf("Erro ao abrir/criar arquivo.");
        exit(1);
    }

    printf("Digite o endereco do arquivo 1 completo...: ");
    scanf(" %[^\n]",address);
    escreverFile(pFile,address);
    system("cls");
    printf("Digite o endereco do arquivo 2 completo...: ");
    setbuf(stdin,NULL);
    scanf(" %[^\n]",address);
    escreverFile(pFile,address);

    printf("arquivos lidos e escritos com sucesso.");
    fclose(pFile);
    return 0;
}

void escreverFile(FILE *pFile, char *address)
{
    char string1[700];
    FILE *reader = fopen(address,"r");
    if(pFile != NULL && reader != NULL)
    {
        fscanf(reader," %[^\n]",string1);
        string1[strlen(string1) + 1] = '\n';
        fwrite(string1,strlen(string1),sizeof(char),pFile);
    }
}
