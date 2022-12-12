#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Comparação de strings de forma lógica */
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
      essa função strupr() transforma todos os caracteres da string em maiuscula
      obs: a função toupper transforma só um caractere em maiuscula
      a função para transformar todas em minuscula é strlwr();
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
            printf("Palavras são iguais.\n");
        }
        else
        {
            printf("Palavras não são iguais");
        }
    }
    else
    {
        printf("Palavras não são iguais.\n");
    }

    return 0;
}
