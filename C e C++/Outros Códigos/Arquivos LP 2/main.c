#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("C:\\Users\\annel\\Desktop\\nome.txt","r");

    if(arquivo == NULL)
    {
        printf("Erro!");
        exit(1);
    }
    //fprintf(arquivo,"Anne Livia de la fonsecqui Macedicche");

    //fprintf(arquivo,"16");
    //fprintf(arquivo,"Aqui estao as minhas informaçoes");
     //fputc('a',arquivo);
     // fputs("\nTeste de escrita com append",arquivo);
    /*int x;
    fscanf(arquivo,"%d",&x);
    printf("%d\n",x);
   */
    char texto[80];
    fgets(texto,80,arquivo);
    //fgetc();

    printf("%s",texto);

    fclose(arquivo);
    /*int n;
    n = fclose(arquivo);
    /*if(n == NULL)
    {
        printf("Arquivo fechado com sucesso!\n");
    }
    */
    return 0;

}
