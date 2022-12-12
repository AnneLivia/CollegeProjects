#include <stdio.h>
#include <stdlib.h>
#define MAX 2

struct students{
  float nota1,nota2,media;
  char nome[50];

} typedef students, classe;

int main()
{
    classe alunos[MAX];
    int i;

    for(i = 0; i < MAX; i++ ){
        setbuf(stdin,NULL);
        printf("Digite o nome do aluno %d: \n",i+1);
        gets(alunos[i].nome);
        printf("\nDigite a nota 1 do aluno(a) %s: \n",alunos[i].nome);
        scanf("%f",&alunos[i].nota1);
        printf("Digite a nota 2 do aluno(a) %s: \n",alunos[i].nome);
        scanf("%f",&alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2;
        system("cls");
    }

    for(i = 0; i < MAX; i++){
        printf("Nome: %s, media final: %.2f, Frequencia: %d\n",alunos[i].nome,alunos[i].media,i+1);
    }
    return 0;
}
