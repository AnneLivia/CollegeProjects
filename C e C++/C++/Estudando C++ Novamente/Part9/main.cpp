#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
    Files in C, functions:

        FILE* fopen("way","kind");
        fclose(FilePointer);
        int feof(pointerFile); // This function returns 0 while it is not the final of the file.
        fseek(pointerFile, amount of bytes you want to jump, from where);
        rewind(pointerFile); // return to the beginner of the function.

    Write on the file:
        fputc('character',filePointer);
        fprintf(filePointer,"string",...):
        fputs("string",pointerFile);  // Em caso de erro retorna EOF, caso sucesso, retorna outro valor.
        fwrite(); // para binario.

    Read:
        retorna valor fgetc(pointerFile);
                      fgets(string variable,int length, pointerFile); // return null if it's occurred an error.
                      fscanf();
*/
using namespace std;

int main()
{
   // FILE *pFile = fopen("teste.txt","r");
   FILE *CopyFileP = fopen("copy.txt","r");

    if(CopyFileP == NULL)
    {
        printf("Erro\n");
        exit(1);
    }

    /*char text[] = "This is a text using fputc";
    for ( int i = 0; i < strlen(text) ;  i++)
    {
        fputc(text[i],pFile);
    }

    fprintf(pFile,"\nThis is another text using fprintf\n");
*/
 /*   char c;
    c = fgetc(pFile);
    while(c != EOF) // Enquanto não chega ao fim de arquivo, end of file.
    {
        printf("%c",c);
        c = fgetc(pFile);
    }
    fclose(pFile);
*/
  /*  // Estou fazendo a copia de um arquivo para outro aqui.
    char c = fgetc(pFile);
    while(c != EOF)
    {
        fputc(toupper(c),CopyFileP);
        c = fgetc(pFile);
    }

    fclose(pFile);
    fclose(CopyFileP);
*/

  /*  char c = fgetc(pFile);
    while(!feof(pFile))
    {
        printf("%c",c);
        c = fgetc(pFile);
    }

    */

    /*int result = fputs("My Text",CopyFileP);
    if(result == EOF)
    {
        printf("Error\n");
        exit(0);
    }
    fputc('\n',CopyFileP);
    fputc('\n',CopyFileP);
    fputs("Hello",CopyFileP);
    fputc('\n',CopyFileP);
    fputs("World",CopyFileP);
    fputc('\n',CopyFileP);
    */

    /*char str[30];
    char *result = fgets(str,30,CopyFileP);
    if(result == NULL)
        printf("error\n");
    else
        printf("%s\n",str);

    */


    fclose(CopyFileP);
    return 0;
}
