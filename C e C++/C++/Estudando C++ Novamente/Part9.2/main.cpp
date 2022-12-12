#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
        fwrite(adress of the variable, byte, quantities, pointerFiler); // para binario. retorna a quantidade de valores que foram lidos

    Read:
        retorna valor fgetc(pointerFile);
                      fgets(string variable,int length, pointerFile); // return null if it's occurred an error.
                      fscanf(pointerFile,"specification of format",variables);
                      fread(address of the variable that you want to store, byte, quantities, pointerfile); // return the amount of things that you want to store.
*/
using namespace std;

typedef struct{
    int x,y;
}Points;
int main()
{
    FILE *pfile = fopen("test.txt","r");
    if(pfile == NULL)
    {
        cout << "Error" << endl;
        exit(1);
    }

   /* int age;
    char name[20];
    Points pp;
    cout << "Type your name: ";
    scanf(" %[^\n]",&name);
    cout << "Type your age: ";
    cin >> age;
    cout << "Point 1 and 2: " << endl;
    cin >> pp.x >> pp.y;
    printf("Name: %s\nAge: %d\npp.x: %d\npp.y: %d\n",name,age,pp.x,pp.y);
    fprintf(pfile,"Name: %s\nAge: %d\npp.x: %d\npp.y: %d\n",name,age,pp.x,pp.y);

    */

    char text[20], name[50];

    fscanf(pfile,"%s %s",text,name);
    printf("%s %s\n", text,name);

    fclose(pfile);
    return 0;
}

