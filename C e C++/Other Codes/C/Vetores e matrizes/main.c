#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char frase[1000], palavra[50];
    int i = 0;

    printf("Digite uma frase: ");
    gets(frase);
    setbuf(stdin,NULL);
    printf("Qual palavra você quer procurar: ");
    gets(palavra);
    int cont = 0;
    int quant;
    quant = strlen(frase);
    while(i <= quant )
    {
       if(strstr(frase,palavra) == 1)
       {
           cont++;
       }
       ++i;
    }
    printf("%d",cont);
    return 0;
}
