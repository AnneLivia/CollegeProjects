#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int idade;
    char sexo;
} Cadastro;

int size = 0;
int oldSize = 0;
int newSize = 0;
int realoca = 1;

void menu();
void cadastrar(int size);
void imprimir();
void limpezadeBuffer(void);

Cadastro *cad;

int main()
{
    printf("Digite quantos cadastros deseja fazer: ");
    scanf("%d",&size);
    cadastrar(size);
    menu();
    imprimir();
    free(cad);
    return 0;
}

void cadastrar(int size)
{
    int i;
    if(realoca == 1)
    {
        cad = (Cadastro *) calloc(size,sizeof(Cadastro));
        for(i = 0; i < size; i++)
        {
            printf("Cadastro %d\n",i+1);
            printf("Digite o seu nome: ");
            scanf(" %[^\n]",cad[i].nome);
            printf("Digite a sua idade: ");
            scanf("%d",&cad[i].idade);
            printf("Digite o seu sexo <F = feminino, M = masculino>: ",cad[i].sexo);
            scanf(" %c",&cad[i].sexo);
        }
    }else{
        cad = (Cadastro*) realloc(cad,size * sizeof(Cadastro));

        for(i = oldSize; i < size; i++)
        {
            printf("Cadastro %d\n",i+1);
            printf("Digite o seu nome: ");
            scanf(" %[^\n]",cad[i].nome);
            printf("Digite a sua idade: ");
            scanf("%d",&cad[i].idade);
            printf("Digite o seu sexo <F = feminino, M = masculino>: ",cad[i].sexo);
            scanf(" %c",&cad[i].sexo);
        }
    }
}

void menu(void)
{
    char opc = 'n';
    int op = 1;

    do{

        printf("Deseja fazer novos cadastros ?");
        scanf(" %c",&opc);
        setbuf(stdin,NULL);
        if(opc == 's')
        {
            realoca = 0;
            oldSize = size;
            printf("Quantos cadastros deseja fazer ?");
            scanf("%d",&newSize);
            size = size + newSize;
            cadastrar(size);
        }
        else
        {
            op = 0;
        }
    }while(op == 1);

}

 void imprimir()
 {
     int i;
     for(i = 0; i < size; i++)
     {
         printf("Cadastro %d\n",i+1);
         printf("Nome: %s\n",cad[i].nome);
         printf("idade: %d\n",cad[i].idade);
         printf("Sexo: %c\n",cad[i].sexo);
     }
 }

