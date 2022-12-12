#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[25];
  char estilo[25];
  int quantP;
  int posicao;
} banda;

int main(){
  banda grupo;

        setbuf(stdin,NULL);
        printf("Digite o nome da banda: ");
        gets(grupo.nome);
        setbuf(stdin,NULL);
        printf("Digite o estilo musica da banda: ");
        gets(grupo.estilo);
        printf("Digite a quantidade de integrantes da banda: ");
        scanf("%d",&grupo.quantP);
        do{
            printf("Digite a posicao da banda no ranking das 5 bandas favoritas: ");
            scanf("%d",&grupo.posicao);
        }while(grupo.posicao <= 0 || grupo.posicao > 5);
        system("cls");

        printf("Banda: %s\n"
                "Estilo musical: %s\n"
                "Quantidade de membros: %d\n"
                "Posicao no ranking: %d\n", grupo.nome,
                                            grupo.estilo,
                                            grupo.quantP,
                                            grupo.posicao);
       return 0;
}
