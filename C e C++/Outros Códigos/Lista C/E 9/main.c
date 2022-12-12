#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[50],Concatenar[50],i, contEspaco = 0;

    printf("Digite alguma frase: ");
    gets(frase);

    setbuf(stdin,NULL);

    int cont = 0;
    i = 0;

    while(frase[i] != '\0')
    {
          i++;

          if(frase[i] != ' ')
          {
              cont++;
              Concatenar[cont] = frase[i];
          }
          else
          {
              contEspaco++;
              continue;
          }

    }

    Concatenar[0] = frase[0];

    printf("Quantidade de espacos em branco: %d\n",contEspaco);
    printf("Frase sem espacos: %s\n",Concatenar);


    return 0;
}
