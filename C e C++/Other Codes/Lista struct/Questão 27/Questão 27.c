#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 5
typedef struct{
   char rua[50],bairro[50],cidade[30],estado[30],cep[25];
} endereco;

typedef struct{
  char nome[50];
  endereco dados;
  float salario;
  int rg;
  char cpf[12];
  int idade;
  char estadoC[15];
  char telefone[15];
  char genero;
} cadastro;

int main()
{
    cadastro pessoas[MAX];
    int i;
    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite o seu nome: ");
        gets(pessoas[i].nome);
        printf("Digite sua idade: ");
        scanf("%d",&pessoas[i].idade);
        printf("Digite seu RG: ");
        scanf("%d",&pessoas[i].rg);
        setbuf(stdin,NULL);
        printf("Digite seu CPF: ");
        gets(pessoas[i].cpf);
        setbuf(stdin,NULL);
        printf("Digite seu esdado civil: ");
        gets(pessoas[i].estadoC);
        setbuf(stdin,NULL);
        printf("Digite seu telefone: ");
        gets(pessoas[i].telefone);
        setbuf(stdin,NULL);
        printf("Digite seu sexo F/M: ");
        pessoas[i].genero = toupper(getchar());
        printf("Digite seu salario: ");
        scanf("%f",&pessoas[i].salario);
        setbuf(stdin,NULL);
        printf("Digite o nome do seu estado: ");
        gets(pessoas[i].dados.estado);
        setbuf(stdin,NULL);
        printf("Digite o nome da sua cidade: ");
        gets(pessoas[i].dados.cidade);
        setbuf(stdin,NULL);
        printf("Digite o nome da sua rua: ");
        gets(pessoas[i].dados.rua);
        setbuf(stdin,NULL);
        printf("Digite o nome do seu bairro: ");
        gets(pessoas[i].dados.bairro);
        setbuf(stdin,NULL);
        printf("Digite o numero do CEP: ");
        gets(pessoas[i].dados.cep);
        system("cls");
    }
    char pessoaMI[50];
    int maiorIdade = pessoas[0].idade;
    for(i = 0; i < MAX; i++)
    {
        if(maiorIdade < pessoas[i].idade)
        {
            maiorIdade = pessoas[i].idade;
            strcpy(pessoaMI,pessoas[i].nome);
        }
        if(pessoas[i].genero == 'M')
        {
            printf("Pessoa do sexo masculino: %s\n",pessoas[i].nome);
        }
        if(pessoas[i].salario > 1000.00)
        {
            printf("Pessoa com salario acima de 1000 reais: %s\n",pessoas[i].nome);
        }
    }
    printf("Pessoa com idade maior: %s, idade: %d\n",pessoaMI,maiorIdade);
    int rg1, cont = 0;
    printf("Digite um RG: ");
    scanf("%d",&rg1);
    printf("\n");
    for(i = 0; i < MAX; i++)
    {
      if(rg1 == pessoas[i].rg)
      {
       printf("Nome: %s\n"
              "RG: %d\n"
              "CPF: %s\n"
              "Idade: %d\n"
              "Salario: %.2f R$\n"
              "Telefone: %s\n"
              "Estado Civil: %s\n"
              "Sexo: %c\n"
              "Estado: %s\n"
              "Cidade: %s\n"
              "Bairro: %s\n"
              "Rua: %s\n"
              "CEP: %s\n",pessoas[i].nome,
                          pessoas[i].rg,
                          pessoas[i].cpf,
                          pessoas[i].idade,
                          pessoas[i].salario,
                          pessoas[i].telefone,
                          pessoas[i].estadoC,
                          pessoas[i].genero,
                          pessoas[i].dados.estado,
                          pessoas[i].dados.cidade,
                          pessoas[i].dados.bairro,
                          pessoas[i].dados.rua,
                          pessoas[i].dados.cep);
            cont++;
      }
    }
    if(cont == 0)
    {
        printf("RG digitado nao encontrado.\n");
    }
     return 0;
}
