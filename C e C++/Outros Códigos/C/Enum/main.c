#include <stdio.h>
#include <stdlib.h>
/*Enum serve para enumerar as coisas*/
enum escapes{tabulacao = '\t',enter = '\n'};

int main()
{
    enum escapes es;
    es = tabulacao;
    printf("Tabulacao %c,Outra tabulacao %c\n",es,es);
    es = enter;
    printf("%cQuebra de linha %c Outra quebra de linha %c",es,es,es);
    return 0;
}
