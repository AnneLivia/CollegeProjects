#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bin(char b[], char n);
void nidd(int n, char b[]);

/*
    Anne Livia
*/
int main()
{
    char bcd[5];
    char num1[100];
    char num2[100];
    int n[strlen(num1)];
    do{
        printf("Obs: Digite dois valores com a mesma quantidade de numeros.\n");
        setbuf(stdin,NULL);
        printf("Digite o numero 1: ");
        scanf(" %s",num1);
        printf("Digite o numero 2: ");
        scanf(" %s",num2);
        system("cls");
    }while(strlen(num1) != strlen(num2));
    printf("\n");

    int tam1 = 5 * strlen(num1); // Pegando o tamanho do numero 1 para inserir no vetor que irá copiar tudo.
    int tam2 = 5 * strlen(num2); // Pegando o tamanho do numero 2 para inserir no vetor que irá copiar tudo.
    char binN1[tam1], binN2[tam2];

    int i, j, k = 0;
    // Palavra 1
    for(i = 0; i < strlen(num1); i++)
    {
      if(num1[i] != NULL)
      {
          bin(bcd,num1[i]);
      }
      for(j = 0; j < 5; j++)
      {
          binN1[k] = bcd[j];
          k++;
      }

    }
    binN1[tam1] = '\0';

    printf("Binario BCD do decimal %s: \n ",num1);
    for(j = 0; j < tam1; j++)
    {
            printf("%c",binN1[j]);

    }
    // Palavra 2
    printf("\n\n");
    k = 0;
    for(i = 0; i < strlen(num2); i++)
    {
      if(num2[i] != NULL)
      {
          bin(bcd,num2[i]);
      }
        for(j = 0; j < 5; j++)
        {
            binN2[k] = bcd[j];
            k++;
        }

    }
    binN2[tam2] = '\0';
    printf("Binario BCD do decimal %s: \n ",num2);
    for(j = 0; j < tam2; j++)
    {
            printf("%c",binN2[j]);

    }
    printf("\n");
    int n1[strlen(num1)];
    int n2[strlen(num2)];
    int tS = strlen(num1) > strlen(num2) ? 5 * strlen(num1) : 5 * strlen(num2);
    int soma[tS];

    for(i = 0; i < strlen(num1); i++)
    {
        n1[i] = num1[i] - '0';
    }

    for(i = 0; i < strlen(num2); i++)
    {
        n2[i] = num2[i] - '0';
    }
    char aux;
    char somaString[tS], bcd2[6];
    int nibble[tS], cont = 0, copiaSoma[strlen(num1)], posicao[tS];
    k = 0;
    for(i = 0; i < strlen(num1); i++)
    {
        soma[i] = n1[i] + n2[i];
        copiaSoma[i] = soma[i];
        if(soma[i] > 9)
        {
            posicao[cont] = i;
            nidd(soma[i],bcd2);
            nibble[cont] = soma[i];
            cont++;
        }
        else
        {
            aux = soma[i] + '0';
            bin(bcd2,aux);
        }
        for(j = 0; j < 5; j++)
        {
            somaString[k] = bcd2[j];
            k++;
        }
    }

    printf("\nResultado da Soma em binario: \n ");
    for(j = 0; j < tS; j++)
    {
            printf("%c ",somaString[j]);

    }
    if(cont > 0)
    {
        printf("\n\n-> Ocorreu nibble invalido, sera realizado a soma com 6 para corrigir o erro:");
    }
    printf("\n\n");
    int resultado[cont];
    char corrigir[10];
    for(i = 0; i < cont; i++)
    {
        resultado[i] = nibble[i] + 6;
        nidd(nibble[i],bcd2);
        printf(" %s + 0110 = ",bcd2);
        finalBCD(resultado[i],corrigir);
        printf(" %s \n\n", corrigir);
    }

    printf("\nResultado final em Decimal: ");
    for(i = 0; i< strlen(num1); i++)
    {
        printf(" %d ",copiaSoma[i]);
    }
    printf("\n\nResultado final em binario: ");

    for(i = 0; i < strlen(num1); i++)
    {
        if(soma[i] > 9)
        {
            finalBCD(soma[i] + 6,corrigir);
            printf(" %s ",corrigir);
        }
        else
        {
            aux = soma[i] + '0';
            bin(bcd,aux);
            printf(" %s ",bcd);
        }
    }
    printf("\n\n");
    return 0;
}

void bin(char b[], char n)
{
    switch(n)
    {
                 case '0' : strcpy(b,"0000");
                            break;
                 case '1' : strcpy(b,"0001");
                            break;
                 case '2' : strcpy(b,"0010");
                            break;
                 case '3' : strcpy(b,"0011");
                            break;
                 case '4' : strcpy(b,"0100");
                            break;
                 case '5' : strcpy(b,"0101");
                            break;
                 case '6' : strcpy(b,"0110");
                            break;
                 case '7' : strcpy(b,"0111");
                            break;
                 case '8' : strcpy(b,"1000");
                            break;
                 case '9' : strcpy(b,"1001");
                            break;
    }
}

void finalBCD(int n, char b[])
{
    switch(n)
    {
                 case 16 : strcpy(b,"0001 0000"); // 10
                            break;
                 case 17 : strcpy(b,"0001 0001"); // 11
                            break;
                 case 18 : strcpy(b,"0001 0010"); // 12
                            break;
                 case 19 : strcpy(b,"0001 0011"); // 13
                            break;
                 case 20 : strcpy(b,"0001 0100"); //14
                            break;
                 case 21 : strcpy(b,"0001 0101"); //15
                            break;
                 case 22 : strcpy(b,"0001 0110"); //16
                            break;
                 case 23 : strcpy(b,"0001 0111"); //17
                            break;
                 case 24 : strcpy(b,"0001 1000"); //18
                            break;

    }
}

void nidd(int n, char b[])
{
    switch(n)
    {
                 case 10 : strcpy(b,"1010");
                            break;
                 case 11 : strcpy(b,"1011");
                            break;
                 case 12 : strcpy(b,"1100");
                            break;
                 case 13 : strcpy(b,"1101");
                            break;
                 case 14 : strcpy(b,"1110");
                            break;
                 case 15 : strcpy(b,"1111");
                            break;
                 case 16 : strcpy(b,"10000");
                            break;
                 case 17 : strcpy(b,"10001");
                            break;
                 case 18 : strcpy(b,"10010");
                            break;
    }
}
