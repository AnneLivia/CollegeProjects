#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Compara��o de strings de forma l�gica */
int TamanhoString(char s[])
{
   int cont1 = 0;
   while(s[cont1] !=  '\0')
    {
      cont1 +=1;
    }
    return cont1;
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    char string1[50], string2[50];

    printf("Digite alguma palavra: ");
    gets(string1);
    printf("Digite alguma palavra: ");
    gets(string2);

    strupr(string1);
    strupr(string2);

     /*
      essa fun��o strupr() transforma todos os caracteres da string em maiuscula
      obs: a fun��o toupper transforma s� um caractere em maiuscula
      a fun��o para transformar todas em minuscula � strlwr();
    */


    int tamanho1;
    int tamanho2;

    tamanho1 = TamanhoString(string1);
    tamanho2 = TamanhoString(string2);

    int i;
    int igualdade = 0;

    if(tamanho1 == tamanho2)
    {
        for(i = 0; i < tamanho1; i++)
        {
            if(string1[i] == string2[i])
                igualdade +=1;
        }
        if(igualdade == tamanho1)
        {
            printf("Palavras s�o iguais.\n");
        }
        else
        {
            printf("Palavras n�o s�o iguais");
        }
    }
    else
    {
        printf("Palavras n�o s�o iguais.\n");
    }

    return 0;
}
