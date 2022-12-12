#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];

    fgets(x,10,stdin);

    printf("%s",x);
    // stdin significa que está lendo alguma entrada de algum lugar.

    freopen("C:\\Users\\annel\\Downloads\\Linguagem C\\Arquivos\\texto.txt","r",stdin);

    fgets(x,100,stdin);

    printf("%s",x);
}
