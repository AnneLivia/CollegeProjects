#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void xor(char*, char*, char*, int);

int main()
{
        int i,j, cont, tamPalavra, tamGerador, Gxbit1[200];
        char palavra[200], gerador[200];
        printf("Digite a palavra: ");
        gets(palavra); // Obtendo a palavra do usuario
        tamPalavra = strlen(palavra);

        system("cls");
        while(palavra[tamPalavra - 1] == '0' || palavra[tamPalavra - tamPalavra] == '0')
        {

            printf("Digite a palavra novamente com o numero 1 tanto inicio quanto final: \a");
            gets(palavra); // Obtendo a palavra do usuario
            setbuf(stdin,NULL);
            tamPalavra = strlen(palavra);
            system("cls");
        }
        printf("\n------------------------------------------------------  C  R  C  -------------------------------------------------------\n\n");
        printf("Palavra digitada: %s\n",palavra);

        printf("\nPolinomio da palavra: ");
        strrev(palavra);
        for(i = tamPalavra - 1; i > 0; i--)
        {
            if(palavra[i] == '1')
            {
                printf("x^%d + ",i);
            }
        }
        printf("1\n");

        int aux = tamPalavra; // Variavel criada somente para ser utilizada na geração do polinomio gerador.
        cont = 0;

        while(cont < aux)
        {
            srand((unsigned)time(NULL));
            Gxbit1[cont] = 2 + rand() % (aux - 2);
            cont++;
            aux--;
        }

        int grauMaior = Gxbit1[0];

        for(i = 0; i < cont; i++)
        {
            if(grauMaior < Gxbit1[i])
            {
                grauMaior = Gxbit1[i];
            }
        }

        tamGerador = grauMaior+1;

        for(i = 1; i < tamGerador - 1; i++)
        {
            gerador[i] = '0';
        }
        gerador[tamGerador] = '\0';

        for(i = 0; i < cont; i++)
        {
            gerador[Gxbit1[i]] = '1';
        }
        gerador[0] = '1';

        printf("\nGerador: %s\n",gerador);

        strrev(gerador);
        printf("\nPolinomio do G(x): ");
        for(i = grauMaior; i > 0; i--)
        {
            if(gerador[i] == '1')
            {
                printf("x^%d + ",i);
            }
        }
        printf("1\n");
        strrev(palavra);
        for(i = tamPalavra; i < tamPalavra + grauMaior; i++)
        {
            palavra[i] = '0';
        }
        palavra[i] = '\0';
        printf("\nPalavra com 0\'s no final: ");
        for(i = 0; i < tamPalavra+grauMaior; i++)
        {
            if(i == tamPalavra)
            {
                printf(" %2c",palavra[i]);
            }
            else
            {
                printf("%2c",palavra[i]);
            }
        }
        printf("\n");
        char gerador1[tamGerador];
        strrev(gerador);
        strcpy(gerador1,gerador);

        char resto[grauMaior];
        char quociente[100];
        char auxiliar[100];


    	for (i = 0; i < tamGerador; i++)
        {
            auxiliar[i] = palavra[i];
        }


    	for (i = 0; i < tamPalavra;i++)
        {
    		quociente[i] = auxiliar[0];
    		if(quociente[i] == '0')
            {
                for (j = 0; j < tamGerador; j++)
                {
                   gerador[j] = '0';
                }
            }
            else
            {
    		    for(j = 0; j < tamGerador; j++)
                {
    		       gerador[j] = gerador1[j];
                }
            }

    		xor(auxiliar, gerador, resto, tamGerador);
    		resto[tamGerador-1] = palavra[i+tamGerador];
    		strcpy(auxiliar,resto);
    	 }
         strcpy(resto,auxiliar);
         char palavraResto[tamPalavra+tamGerador];
         char palavra2[200];

         for (i=0;i<tamPalavra;i++)
         {
             palavraResto[i] = palavra[i];
         }

        for (i=0;i<tamGerador-1;i++)
        {
            palavraResto[i+tamPalavra] = resto[i];
        }
        printf("\nResto da divisao: %s\n",resto);

        printf("\nPalavra adicionada com o resto da divisao: ");
        palavraResto[tamGerador+tamPalavra - 1] = '\0';
        for(i = 0; i < tamPalavra+tamGerador; i++)
        {
            if(i == tamPalavra)
            {
                printf(" %2c",palavraResto[i]);
            }
            else
            {
                printf("%2c",palavraResto[i]);
            }
        }

        printf("\n\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------\n");
        system("pause");
        printf("\nDigite a palavra: ");
        gets(palavra2);

        system("cls");
        printf("\n------------------------------------------------------  C  R  C  -------------------------------------------------------\n\n");
        printf("Palavra: %s\n", palavra2);
        for (i = 0; i < tamGerador; i++)
        {
            auxiliar[i] = palavra2[i];
        }


        for (i = 0; i < tamPalavra;i++)
        {
            quociente[i] = auxiliar[0];
            if(quociente[i] == '0')
            {
                for (j = 0; j < tamGerador; j++)
                {
                    gerador[j] = '0';
                }
            }
            else
            {
                for(j = 0; j < tamGerador; j++)
                {
                    gerador[j] = gerador1[j];
                }
            }


            xor(auxiliar, gerador, resto, tamGerador);
            resto[tamGerador-1] = palavra2[i+tamGerador];
            strcpy(auxiliar,resto);
        }

            printf("\nResultado: %s\n",resto);
            printf("\n------------------------------------------------------------------------------------------------------------------------\n");

         return 0;
}


void xor(char t[], char g[], char r[], int tamG)
{
    int i;
    for (i = tamG-1;i > 0;i--)
    {
        if(t[i]==g[i])
            r[i-1]='0';
        else
            r[i-1]='1';
    }
}
