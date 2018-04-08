#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void completarTransporte(char t[], int tamP)
{
    int i;
    for(i = 0; i < tamP; i++)
    {
        if(t[i] != '0' && t[i] != '1')
        {
            t[i] = '0';
        }
    }
}

void imprimir(char palavra[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("%2c",palavra[i]);
    }
}
int main()
{
    char palavra1[200], palavra2[200], soma[200], transporte[200],  checksum[200], checksumI[200];
    int tamP1, tamP2, i;

    printf("Digite a palavra 1: ");
    gets(palavra1);
    setbuf(stdin,NULL);
    printf("Digite a palavra 2: ");
    gets(palavra2);
    system("cls");
    tamP1 = strlen(palavra1);
    tamP2 = strlen(palavra2);

    for(i = tamP1; i >= 0; i--)
    {
       if(palavra1[i] == '0' && palavra2[i] == '0')
       {
           soma[i] = '0';
           transporte[i-1] = '0';
       }
       else if(palavra1[i] == '0' && palavra2[i] == '1')
       {
           soma[i] = '1';
           transporte[i-1] = '0';
       }
       else if(palavra1[i] == '1' && palavra2[i] == '0')
       {
           soma[i] = '1';
           transporte[i-1] = '0';
       }
       else if(palavra1[i] == '1' && palavra2[i] == '1')
       {
           soma[i] = '0';
           transporte[i-1] = '1';
       }
    }
    completarTransporte(transporte, tamP1);
    int cont0 = 0;
    for(i = 0; i < tamP1; i++)
    {
        if(transporte[i] == '0')
        {
            cont0++;
        }
    }
    char auxiliar[tamP1];
    int j;
    strcpy(auxiliar, transporte);
    while(cont0 != tamP1)
    {
      strcpy(auxiliar,transporte);
      for(i = tamP1; i >= 0; i--)
      {
            if(soma[i] == '0' && auxiliar[i] == '0')
            {
                soma[i] = '0';
                transporte[i-1] = '0';
            }
            else if(soma[i] == '0' && auxiliar[i] == '1')
            {
                soma[i] = '1';
                transporte[i-1] = '0';
            }
            else if(soma[i] == '1' && auxiliar[i] == '0')
            {
                soma[i] = '1';
                transporte[i-1] = '0';
            }
            else if(soma[i] == '1' && auxiliar[i] == '1')
            {
                soma[i] = '0';
                transporte[i-1] = '1';
            }
        }
         completarTransporte(transporte,tamP1);
         cont0 = 0;
        for(j = 0; j < tamP1; j++)
        {
            if(transporte[j] == '0')
            {
                ++cont0;
            }
        }
    }

     strcpy(checksum, soma);
     checksum[tamP1] = '\0';

     for(i = 0; i < tamP1; i++)
     {
         if(checksum[i] == '0')
         {
             checksumI[i] = '1';
         }
         else
         {
             checksumI[i] = '0';
         }
     }
     checksumI[tamP1] = '\0';

     for(i = tamP1; i >= 0; i--)
    {
       if(checksum[i] == '0' && checksumI[i] == '0')
       {
           soma[i] = '0';
           transporte[i-1] = '0';
       }
       else if(checksum[i] == '0' && checksumI[i] == '1')
       {
           soma[i] = '1';
           transporte[i-1] = '0';
       }
       else if(checksum[i] == '1' && checksumI[i] == '0')
       {
           soma[i] = '1';
           transporte[i-1] = '0';
       }
       else if(checksum[i] == '1' && checksumI[i] == '1')
       {
           soma[i] = '0';
           transporte[i-1] = '1';
       }
    }
    completarTransporte(transporte, tamP1);
    cont0 = 0;
    for(i = 0; i < tamP1; i++)
    {
        if(transporte[i] == '0')
        {
            cont0++;
        }
    }

    strcpy(auxiliar, transporte);
    while(cont0 != tamP1)
    {
      strcpy(auxiliar,transporte);
      for(i = tamP1; i >= 0; i--)
      {
            if(soma[i] == '0' && auxiliar[i] == '0')
            {
                soma[i] = '0';
                transporte[i-1] = '0';
            }
            else if(soma[i] == '0' && auxiliar[i] == '1')
            {
                soma[i] = '1';
                transporte[i-1] = '0';
            }
            else if(soma[i] == '1' && auxiliar[i] == '0')
            {
                soma[i] = '1';
                transporte[i-1] = '0';
            }
            else if(soma[i] == '1' && auxiliar[i] == '1')
            {
                soma[i] = '0';
                transporte[i-1] = '1';
            }
        }
         completarTransporte(transporte,tamP1);
         cont0 = 0;
        for(j = 0; j < tamP1; j++)
        {
            if(transporte[j] == '0')
            {
                ++cont0;
            }
        }
    }
     char resposta[tamP1];
     strcpy(resposta, soma);
     resposta[tamP1] = '\0';

     printf("-------------------------------------- C H E C K S U M --------------------------------------\n\n");

     imprimir(palavra1,tamP1);
     printf(" <- Palavra 1\n\n");
     imprimir(palavra2,tamP1);
     printf(" <- Palavra 2\n\n");
     imprimir(checksum,tamP1);
     printf(" <- Checksum\n\n");
     imprimir(checksumI,tamP1);
     printf(" <- Checksum Invertido\n\n");
     imprimir(resposta, tamP1);
     printf(" <- Resultado\n\n");
     printf("\n");
     printf("\n---------------------------------------------------------------------------------------------\n\n");

      return 0;

}
