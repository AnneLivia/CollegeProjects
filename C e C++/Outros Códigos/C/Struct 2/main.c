#include <stdio.h>
#include <stdlib.h>

struct mediaaluno{
float nota1,nota2,media;
char nome[80];
};
int main()
{
    struct mediaaluno a1,a2;
    fflush(stdin);
    printf("Digite seu nome: \n");
    gets(a1.nome);
    printf("Digite sua nota 1 %s: ",a1.nome);
    scanf("%f",&a1.nota1);
    printf("Digite sua nota 2 %s: ",a1.nome);
    scanf("%f",&a1.nota2);
    a1.media = (a1.nota1 + a1.nota2)/2;
    printf("Sua media equivale a %f %s",a1.media,a1.nome);
    fflush(stdin);
    printf("\nDigite seu nome: \n");
    gets(a2.nome);
    printf("Digite sua nota 1 %s: ",a2.nome);
    scanf("%f",&a2.nota1);
    printf("Digite sua nota 2 %s: ",a2.nome);
    scanf("%f",&a2.nota2);
    a2.media = (a2.nota1 + a2.nota2)/2;
    printf("Sua media equivale a %f %s",a2.media,a2.nome);
    return 0;
}
