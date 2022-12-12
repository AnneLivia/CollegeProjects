#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 3

void mensagem(void)
{
    printf("------------------------------ P E S Q U I S A  N O  B A N C O ------------------------------\n\n");
}
int SaldoNegativo(int n)
{
    if(n < 0)
    {
       return n = 0;
    }
    else
    {
       return n;
    }
}
typedef struct{
  char nome[50];
  char cpf[13];
  float deposito;
} cadastro;
int main()
{
    cadastro pessoa[MAX];
    int i;
    printf("------------------------------ C A D A S T R O  N O  B A N C O ------------------------------\n\n");
    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite seu nome: ");
        gets(pessoa[i].nome);
        printf("Digite seu CPF: ");
        scanf(" %s",pessoa[i].cpf);
        printf("Faca o primeiro deposito:\n");
        scanf("%f",&pessoa[i].deposito);
        system("cls");
        printf("------------------------------ C A D A S T R O  N O  B A N C O ------------------------------\n\n");
    }

    int opcao;
    float depositar,sacar;
    char cpf[13];
    char resp;

    do{
        system("cls");
        int numConta = 0;
        int verificar = 0;
        mensagem();
        printf("Para continuar a utilizacao do programa:\n");
        printf("Digite seu cpf: ");
        scanf(" %s",cpf);
        for(i = 0; i < MAX; i++)
        {
            if(strcmp(pessoa[i].cpf,cpf) == 0)
            {
                numConta = i;
                verificar = 1;
            }

        }
        if(verificar == 1)
        {
                printf("Digite uma opcao: \n"
                        "1 - Depositar\n"
                        "2 - Saquar\n"
                        "3 - Final do programa\n"
                        "Digite aqui: ");
                scanf("%d",&opcao);
                switch(opcao)
                {
                        case 1 : printf("Quanto deseja depositar ?\n");
                                 scanf("%f",&depositar);
                                 pessoa[numConta].deposito += depositar;
                                 pessoa[numConta].deposito =SaldoNegativo(pessoa[numConta].deposito);
                                 system("cls");
                                 mensagem();
                                 printf("NOME DO TITULAR: %s\nSALDO FINAL NO BANCO: %.2f\n\n",pessoa[numConta].nome,
                                                                                            pessoa[numConta].deposito);
                                 system("pause");
                                 break;
                        case 2 : if(pessoa[numConta].deposito == 0.0)
                                 {
                                       printf("Impossivel fazer saque pois sua conta esta zerada.\n");
                                       break;
                                 }

                                 printf("Quanto deseja sacar ?\n");
                                 scanf("%f",&sacar);
                                 if(pessoa[numConta].deposito < sacar)
                                 {
                                     printf("Voce so poderar sacar %.2f R$\n", pessoa[numConta].deposito);
                                     system("pause");
                                 }
                                 pessoa[numConta].deposito -= sacar;
                                 pessoa[numConta].deposito = SaldoNegativo(pessoa[numConta].deposito);
                                 system("cls");
                                 mensagem();
                                 printf("NOME DO TITULAR: %s\n"
                                        "SALDO FINAL NO BANCO: %.2f\n\n",pessoa[numConta].nome,
                                                                     pessoa[numConta].deposito);
                                 system("pause");
                                 break;
                        case 3 : system("cls");
                                 mensagem();
                                 break;
                        default : printf("Opcao Invalida\n");


                }

        }
        else
        {
            printf("CPF invalido\n");
        }
        setbuf(stdin,NULL);
        printf("\nDeseja sair do programa S/N: \nDigite aqui: ");
        resp = toupper(getchar());

    }while(resp != 'S');
    printf("Programa finalizado...");
    return 0;

}
