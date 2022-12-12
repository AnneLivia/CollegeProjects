#include <stdio.h>
#include <stdlib.h>
typedef struct{
  char rua[30];
  int numeroCasa;

} endereco;

 typedef struct{
     char nome[50];
     int idade;
     endereco dados;
} pessoa;

int main()
{

    pessoa person;
    setbuf(stdin,NULL);
    printf("Digite seu nome: ");
    gets(person.nome);
    printf("Digite sua idade: ");
    scanf("%d",&person.idade);
    printf("Digite o nome da rua: ");
    setbuf(stdin,NULL);
    gets(person.dados.rua);
    printf("Digite o numero da casa: ");
    scanf("%d",&person.dados.numeroCasa);
    system("cls");

    printf("Nome: %s\n"
           "Idade: %d\n"
           "Rua: %s\n"
           "Numero da Casa: %d\n",person.nome,
                                  person.idade,
                                  person.dados.rua,
                                  person.dados.numeroCasa);


    return 0;
}
