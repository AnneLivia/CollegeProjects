#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float altura;
    float peso;
    char cpf[13];
    char gen;
} cadrastro;

int main()
{
    int quantP, i;
    printf("Digite a quatidade de pessoas: ");
    scanf("%d",&quantP);

    cadrastro pessoas[quantP];
    system("cls");
    printf("______________________  E N T R A D A  D E  D A D O S ______________________\n\n");
    for(i = 0; i < quantP; i++)
    {
      setbuf(stdin,NULL);
      printf("Digite seu nome: ");
      gets(pessoas[i].nome);
      printf("Digite sua altura: ");
      scanf("%f",&pessoas[i].altura);
      printf("Digite seu peso: ");
      scanf("%f",&pessoas[i].peso);
      setbuf(stdin,NULL);
      printf("CPF formato(xxxxxxxxx-xx)\nDigite seu CPF: ");
      gets(pessoas[i].cpf);
      setbuf(stdin,NULL);
      printf("Digite seu genero.\nF - Feminino\nM - Masculino\nDigite aqui: ");
      pessoas[i].gen = getchar();
      system("CLS");
      printf("______________________  E N T R A D A  D E  D A D O S ______________________ \n\n");
    }

    system("cls");
    char cpf[13];
    int cont = 0;

    printf("______________________  E S P A C O  D E  P E S Q U I S A ______________________ \n\n");
    setbuf(stdin,NULL);
    printf("Digite o CPF da pessoa: ");
    scanf(" %s",&cpf);

    for( i = 0; i < quantP; i++){
        if(strcasecmp(pessoas[i].cpf,cpf) == 0)
        {
            printf("Nome: %s\nSexo: %c\nIMC: %.2f",pessoas[i].nome,pessoas[i].gen,(pessoas[i].peso/(pessoas[i].altura * pessoas[i].altura)));
            cont = 1;
        }
    }

      if(cont == 0)
      {
          printf("\nCPF nao encontrado\n");
      }
    return 0;
}
