#include <stdio.h>
#include <stdlib.h>
#define MAX 5


typedef struct{
  int codigo;
  char nome[15];
  float preco;
  int quant;
}produtos;

void informacao(produtos x[], int n)
{
    int i;
     printf("________________________________COMPRAR PRODUTOS________________________________\n\n");
     printf("CODIGO - PRODUTO\n");
    for(i = 0; i < n; i++)
    {

        printf("%d - %s\n",x[i].codigo, x[i].nome);
    }
    printf("\n\n");

}

int main()
{
    produtos vetor[MAX];
    int i;
    for(i = 0; i < MAX; i++)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d",&vetor[i].codigo);
        setbuf(stdin,NULL);
        printf("Nome: ");
        gets(vetor[i].nome);
        setbuf(stdin,NULL);
        printf("Preco: ");
        scanf("%f",&vetor[i].preco);
        printf("Quantidade: ");
        scanf("%d",&vetor[i].quant);
        system("cls");
    }
    int cod, quantidade;
    informacao(vetor,MAX);
    printf("Digite o codigo do produto: ");
    scanf("%d",&cod);

    while(cod != 0)
    {
        printf("Digite a quantidade: ");
        scanf("%d",&quantidade);
        for(i = 0; i < MAX; i++)
        {
            if(cod == vetor[i].codigo)
            {
                if(vetor[i].quant >= quantidade)
                {
                    printf("QUANTIDADE EM ESTOQUE: %d\n\n",vetor[i].quant);
                    vetor[i].quant -=quantidade;
                    printf("PRODUTO: %s\nQUANTIDADE LEVADA: %d\nPRECO A PAGAR: %.2fR$\n\n",vetor[i].nome, quantidade,
                                                                                           vetor[i].preco * quantidade);
                }
                else
                {
                    printf("Nao ha quantidade suficiente de produtos em estoque.\n");
                    printf("Quantidade em estoque: %d\n",vetor[i].quant);
                }
            }

        }
        system("pause");
        system("cls");
        informacao(vetor,MAX);
        printf("Digite o codigo do produto ou 0 para sair: ");
        scanf("%d",&cod);
    }
    printf("\n Programa finalizado....\n");
    return 0;
}
