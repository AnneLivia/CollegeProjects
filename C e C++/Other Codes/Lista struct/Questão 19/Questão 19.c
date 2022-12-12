#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void minusculo(char texto[])
{
    int i;
    for(i = 0; texto[i] != '\0'; i++)
    {
        texto[i] = tolower(texto[i]);
    }
}
int main()
{
    typedef struct{
      char titulo[30];
      char autor[15];
      int ano;
    } livros;

    int quant,i;
    printf("Digite a quantidade de livros para cadastrar: ");
    scanf("%d",&quant);

    livros books[quant];
    for(i = 0; i < quant; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite o titulo do livro: ");
        gets(books[i].titulo);
        minusculo(books[i].titulo);
        printf("Digite o ano do livro: ");
        scanf("%d",&books[i].ano);
        setbuf(stdin,NULL);
        printf("Digite a nome do autor: ");
        gets(books[i].autor);
        system("cls");
    }

    char titulo[30];
    int cont = 0;
    setbuf(stdin,NULL);
    printf("Digite o titulo do livro que deseja encontrar: ");
    gets(titulo);
    minusculo(titulo);
    printf("RESULTADO: \n\n");
    for(i = 0; i < quant; i++)
    {
        if(strstr(books[i].titulo,titulo))
        {
            printf("TITULO: %s\n"
                   "ANO: %d\n"
                   "AUTOR: %s\n\n",toupper(books[i].titulo),
                                 books[i].ano,
                                 books[i].autor);
            cont++;
        }
    }

    if(cont == 0)
    {
        printf("Nao foi encontrado nenhum livro com esse titulo.\n");
    }
    return 0;
}
