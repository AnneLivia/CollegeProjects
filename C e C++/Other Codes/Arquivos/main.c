#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pFile; // dessa forma criamos um ponteiro do tipo FILE.

    pFile = fopen("teste.txt","w");  //Isso informa o endereço do arquivo, e o w quer dizer write

    fprintf(pFile,"Esse é o meu primeiro teste com arquivo.");  // Isso coloca o texto no arquivo e deve se usar o ponteiro do arquivo.
    fclose(pFile);  // isso garante que o arquivo foi salvo e fechado corretamente


    return 0;
}

