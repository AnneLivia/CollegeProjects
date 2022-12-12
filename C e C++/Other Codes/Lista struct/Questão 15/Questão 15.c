#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct
{
    int dia;
    int mes;
    int ano;

}data;

typedef struct{
  char cargo[30];
  int codigo;
  float salario;

} trabalho;

typedef struct{
  char nome[50], cpf[13];
  int idade;
  char sexo;
  data nascimento;
} dados;
int main()
{
    struct
    {
        dados person;
        trabalho informacao;
    }pessoa;

    printf("Digite seu nome: ");
    gets(pessoa.person.nome);
    setbuf(stdin,NULL);
    printf("Digite seu genero (F/M): ");
    pessoa.person.sexo = toupper(getchar());
    setbuf(stdin,NULL);
    printf("Digite seu CPF: ");
    gets(pessoa.person.cpf);
    setbuf(stdin,NULL);
    printf("Digite sua idade: ");
    scanf("%d",&pessoa.person.idade);
    printf("Digite a sua da data de nascimento, respectivamente dia,mes e ano: \n");
    scanf("%d %d %d",&pessoa.person.nascimento.dia,&pessoa.person.nascimento.mes,&pessoa.person.nascimento.ano);
    setbuf(stdin,NULL);
    printf("Digite seu cargo: ");
    gets(pessoa.informacao.cargo);
    setbuf(stdin,NULL);
    printf("Digite o codigo do setor: ");
    scanf("%d",&pessoa.informacao.codigo);
    printf("Digite seu salario: ");
    scanf("%f",&pessoa.informacao.salario);

    system("cls");
    printf("NOME: %s\n"
           "IDADE: %d\n"
           "DATA DE NASCIMENTO: %d/%d/%d\n"
           "GENERO: %c\n"
           "CPF: %s\n"
           "CARGO: %s\n"
           "CODIGO DO SETOR: %d\n"
           "SALARIO: %.2f\n",pessoa.person.nome,
                             pessoa.person.idade,
                             pessoa.person.nascimento.dia,
                             pessoa.person.nascimento.mes,
                             pessoa.person.nascimento.ano,
                             pessoa.person.sexo,
                             pessoa.person.cpf,
                             pessoa.informacao.cargo,
                             pessoa.informacao.codigo,
                             pessoa.informacao.salario);

    return 0;
}
