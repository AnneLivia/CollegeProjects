#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE *pFile;
     int conseguiuLer;
     char string[100];

     pFile = fopen("Arquivo.txt","r");

     if( pFile == NULL )
     {
         printf("Arquivo nao existe!\n");
         exit(1);
     }


/*
     while(!feof(pFile))
     {
         conseguiuLer = fgets(string,100,pFile);
         if(conseguiuLer)
         {
             printf("%s",string);
         }
     }
*/
     char c;
     while(!feof(pFile))
     {
         fscanf(pFile,"%c",&c);
         printf("%c",c);
         c = ' ';
     }

     fclose(pFile);
    return 0;
}
