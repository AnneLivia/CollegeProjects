#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
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
                      fscanf();
                      fread(address of the variable that you want to store, byte, quantities, pointerfile); // return the amount of things that you want to store.
*/
// Arquivo binario.

typedef struct Person
{
    int age;
    char name[50];
}Person;

int main()
{
    FILE *pFileBinario;

    if((pFileBinario = fopen("binaryFile.txt","rb")) == NULL)
    {
        printf("ERROR.\n");
        exit(1);
    }

   /*   int qtd, vet[5] = {1,4,2,2,1};

    qtd = fwrite(vet,sizeof(int),5,pFileBinario);
    if(qtd != 5)
    {
        printf("Error\n");
    }
*/
 /*
    Person p1 = {20,"Livia"};
    int number = 1;
    float f = 1.22;
    char c = 'a';
    fwrite(&p1,sizeof(Person),1,pFileBinario);
    fwrite(&f,sizeof(float),1,pFileBinario);
    fwrite(&number,sizeof(int),1,pFileBinario);
    fwrite(&c,sizeof(char),1,pFileBinario);
*/

    /*int vet[5], qtd;
    qtd = fread(vet,sizeof(int),5,pFileBinario);
    if(qtd != 5)
    {
        printf("Error\n");
        exit(0);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d,",vet[i]);
    }
    printf("\n\n");
*/
    Person p2;
    fread(&p2,sizeof(Person),1,pFileBinario);
    cout << "Age: " << p2.age << "\nName: " << p2.name << endl;

    float f1;
    fread(&f1,sizeof(float),1,pFileBinario);
    printf("%f\n",f1);

    int x;
    fread(&x,sizeof(int),1,pFileBinario);
    printf("%d\n",x);

    char ca;
    fread(&ca,sizeof(char),1,pFileBinario);
    printf("%c\n",ca);
    fclose(pFileBinario);
    return 0;
}
