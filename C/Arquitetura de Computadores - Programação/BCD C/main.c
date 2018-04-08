#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    void bcd(char n[], int n1);

    int n1, n2, i = 3;
    char bN1[5], bN2[5];
    printf("Digite um numero de 1 a 9: ");
    scanf("%d",&n1);
    printf("Digite um outro numero de 1 a 9: ");
    scanf("%d",&n2);
    while(n1 > 9 || n1 < 0 || n2 > 9 || n2 < 0){
        printf("Digite novamente um numero que esteja entre o intervalo de 1 a 9: ");
        scanf("%d",&n1);
        printf("Digite novamente outro numero que esteja entre o intervalo de 1 a 9: ");
        scanf("%d",&n2);
    }
    printf("\n\n");
    bcd(bN1,n1);
    bcd(bN2,n2);
    printf("Numero %d em binario: ",n1);
    for(i = 0; i < 4; i++)
    {
        printf("%c ",bN1[i]);
    }
    printf("\n\nNumero %d em binario: ",n2);
    for(i = 0; i < 4; i++)
    {
        printf("%c ",bN2[i]);
    }
    printf("\n");

    char complete[6] = {"0000"};
    char x = '0';

    for(i = 3; i >= 0; i--)
    {
        if(bN1[i] == '0' && bN2[i] == '0' && x == '0')
        {
            complete[i] = '0';
            x = '0';
        }else if(bN1[i] == '0' && bN2[i] == '0' && x == '1')
        {
            complete[i] = '1';
            x = '0';
        }else if(bN1[i] == '0' && bN2[i] == '1' && x == '1')
        {
            complete[i] = '0';
            x = '1';
        }
        else if(bN1[i] == '0' && bN2[i] == '1' && x == '0')
        {
            complete[i] = '1';
            x = '0';
        }else if(bN1[i] == '1' && bN2[i] == '0' && x == '0')
        {
            complete[i] = '1';
            x = '0';
        }else if(bN1[i] == '1' && bN2[i] == '1' && x == '1')
        {
            complete[i] = '1';
            x = '1';
        }else if(bN1[i] == '1' && bN2[i] == '0' && x == '1'){
            complete[i] = '0';
            x = '1';
        }else if(bN1[i] == '1' && bN2[i] == '1' && x == '0')
        {
            complete[i] = '0';
            x = '1';
        }
    }
    printf("\n");
    printf("A soma em binario e: ");
    for(i = 0; i < 4; i++)
    {
        printf("%c ",complete[i]);
    }

    int s = n1+n2;
    char geral[9] = {"0001"};
    char seis[5];
    bcd(seis,6);

    printf("\n\n");
    if(s > 9)
    {

    char x = '0';
    int j = 7;
    for(i = 3; i >= 0; i--)
    {
        if(complete[i] == '0' && seis[i] == '0' && x == '0')
        {
            geral[j] = '0';
            x = '0';
        }else if(complete[i] == '0' && seis[i] == '0' && x == '1')
        {
            geral[j] = '1';
            x = '0';
        }else if(complete[i] == '0' && seis[i] == '1' && x == '1')
        {
            geral[j] = '0';
            x = '1';
        }
        else if(complete[i] == '0' && seis[i] == '1' && x == '0')
        {
            geral[j] = '1';
            x = '0';
        }else if(complete[i] == '1' && seis[i] == '0' && x == '0')
        {
            geral[j] = '1';
            x = '0';
        }else if(complete[i] == '1' && seis[i] == '1' && x == '1')
        {
            geral[j] = '1';
            x = '1';
        }else if(complete[i] == '1' && seis[i] == '0' && x == '1'){
            geral[j] = '0';
            x = '1';
        }else if(complete[i] == '1' && seis[i] == '1' && x == '0')
        {
                geral[j] = '0';
                x = '1';
        }
            j--;
        }
        printf("Soma com 6: ");
        for(i = 0; i < 4; i++)
        {
            printf("%c ",complete[i]);
        }
        printf(" + \n            0 1 1 0 \n            _______\n          1 ");
        for(i = 4; i < 8; i++)
        {
            printf("%c ",geral[i]);
        }
        printf("\n\nResultado final: \n");
        printf("Binario: ");
        for(i = 0; i < 8; i++)
        {
            if(i == 4)
            {
                printf(" ");
            }
            printf("%c ",geral[i]);
        }
        }else{
            printf("\n\nResultado final: \n");
            printf("Binario: ");
            for(i = 0; i < 4; i++)
            {
                printf("%c ",complete[i]);
            }
        }

     printf("\nDecimal: ");
     printf("%d \n\n",s);
     return 0;
}
void bcd(char *n, int n1)
{
    int i;
    if(n1 == 9)
    {
        for(i = 0; i < 4; i++)
         {
             if(i == 0 || i == 3){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 8){
        for(i = 0; i < 4; i++)
         {
             if(i == 0){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 7){
        for(i = 0; i < 4; i++)
         {
             if(i == 1 || i == 2 || i == 3){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 6){
       for(i = 0; i < 4; i++)
         {
             if(i == 1 || i == 2){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 5){
        for(i = 0; i < 4; i++)
        {
             if(i == 1 || i == 3){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 4){
        for(i = 0; i < 4; i++)
         {
             if(i == 1){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 3){
        for(i = 0; i < 4; i++)
         {
             if(i == 2 || i == 3){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 2){
        for(i = 0; i < 4; i++)
         {
             if(i == 2){
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 1){
        for(i = 0; i < 4; i++)
         {
             if(i == 3)
             {
                 n[i] = '1';
             }else{
                 n[i] = '0';
             }

         }
    }else if(n1 == 0){
         for(i = 0; i < 4; i++)
         {
             n[i] = '0';
         }
    }
}
