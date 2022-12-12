#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void titulo()
{
    printf("\n----------------------------------------- C O R R E Ç Ã O  D E  P R O V A S --------------------------------------------\n");
}
void linhas()
{
  printf("________________________________________________________________________________________________________________________");
}
void linhas1()
{
  printf("_______________________________________________________________________________________Desenvolvido por Anne Livia______\n");
}
int main()
{
    setlocale(LC_ALL,"portuguese");

    int Q, QuantAlunos;
    titulo();
    linhas1();
    printf("Digite a quantidade de questões: ");
    scanf("%d",&Q);
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&QuantAlunos);
    system("cls");

    struct alunos{
       char nome[50];
       char questoes[Q];
       float soma;
    } typedef alunos,arquivo;

    char gabarito[Q];
    int cont;
    float pontos[Q];
    arquivo aluno[QuantAlunos];

    // Leitura das questões corretas.
    titulo();
    linhas();
    printf("\nDIGITE AS ALTERNATIVAS CORRETAS.\n");
    linhas1();
    for( cont = 0; cont < Q; cont++ )
    {
        setbuf(stdin,NULL);
        printf("Gabarito da questão nº %d: ",cont+1);
        gabarito[cont] = tolower(getchar());
    }
    system("cls");
    titulo();
    linhas();

    // pontuação de cada questão
    printf("\nDIGITE A PONTUAÇÃO DE CADA QUESTÃO. \n");
    linhas1();

    for(cont = 0; cont < Q; cont++)
    {
       printf("Valor da questão %d: ",cont+1);
       scanf("%f",&pontos[cont]);
    }
    system("cls");
    titulo();
    printf("\n");

    //Leitura do nome dos alunos
    int cont2;
    linhas();
    printf("\nLEITURA DE DADOS DOS ALUNOS.\n");
    linhas1();

    int tamanho = 0;
    int quantCaract;

    for(cont = 0; cont < QuantAlunos; cont++)
    {
        setbuf(stdin,NULL);
        printf("Digite o nome do(a) aluno(a) nº %d: ",cont+1);
        gets(aluno[cont].nome);
        quantCaract = strlen(aluno[cont].nome); // quantidade de letras para a formatação melhor.
        if(quantCaract >= tamanho)
        {
            tamanho = quantCaract;
        }
        printf("\nDigite as alternativas marcadas pelo(a) aluno(a) %s: \n",aluno[cont].nome);
        for(cont2 = 0; cont2 < Q ; cont2++)
        {
            setbuf(stdin,NULL);
            printf("Questão %d: ",cont2+1);
            aluno[cont].questoes[cont2] = tolower(getchar());
        }
        system("cls");
        titulo();
        linhas();
        printf("\nLEITURA DE DADOS DOS ALUNOS.\n");
        linhas1();
    }

    system("cls");
    titulo();
    // soma dos pontos
    for(cont = 0; cont < QuantAlunos; cont++)
    {
        aluno[cont].soma = 0;
        for(cont2 = 0; cont2 < Q; cont2++)
        {
            if(aluno[cont].questoes[cont2] == gabarito[cont2])
            {
                aluno[cont].soma = pontos[cont2] + aluno[cont].soma;
            }
        }
    }


    // escrever na tela resultado
    char espaco[] = {"  "};
    printf("\n\n");
    linhas();
    printf("\nNOMES%-*s\t\tNOTAS\n",tamanho,espaco);
    linhas();

    for(cont2 = 0; cont2 < QuantAlunos ; cont2++)
    {
      linhas();
      printf("%-*s\t\t%.02f\n",tamanho,aluno[cont2].nome,aluno[cont2].soma);
      linhas();
    }

    printf("\n\n");
    linhas1();
    system("pause");
    return 0;
}
