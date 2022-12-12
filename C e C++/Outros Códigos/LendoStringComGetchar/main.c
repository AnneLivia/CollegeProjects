#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define max(x,y) x > y ? 3 : 5

int main()
{
    setlocale(LC_ALL,"portuguese");

    char digitado[100];
    char caracter;
    char *frase;

    int i = 0;
    printf("Digite alguma frase: \n");
    do{
        caracter = getchar();
        digitado[i] = caracter;
        i++;
    }while(caracter != '\n');
    digitado[i - 1] = '\0';

    frase = (char *) calloc(strlen(digitado), sizeof(char));
    if(frase == NULL)
    {
        puts("Erro, memória insuficiente!");
        system("pause > NULL");
        exit(1);
    }

    strcpy(frase,digitado);

    printf("A frase digitada foi: %s\n",frase);
    free(frase);
    int x,y;
    printf("Digite dois números: ");
    scanf("%d %d",&x,&y);

    printf("%d",max(x,y));
    printf("Digite algo: ");
    char a,b,c;
    limpezadeBuffer();
    a = getchar();
    limpezadeBuffer();
    b = getchar();
    limpezadeBuffer();
    c = getchar();
    limpezadeBuffer();

   printf("%c %c %c\n",a,b,c);
    return 0;
}


void limpezadeBuffer(void)
{
    char c;
    while(c = getchar() != '\n' && c != EOF);
}
