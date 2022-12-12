#include <stdio.h>
#include <stdlib.h>
void mensagem(void)
{
    printf("------------------------------ C A D A S T R O  D E  P R O D U T O S ------------------------------ \n");
}

int main()
{
    typedef struct{
       float preco;
       char nomeProduto[50];
       int codigo;

    }produto;


    int quantProdutos, i, logico = 0;
    printf("Digite a quantidade de produtos: ");
    scanf("%d",&quantProdutos);
    system("cls");
    mensagem();
    produto nomes[quantProdutos];
    for(i = 0; i < quantProdutos; i++)
    {
        setbuf(stdin,NULL);
        printf("Nome do produto: ");
        gets(nomes[i].nomeProduto);
        printf("Codigo do produto: ");
        scanf("%d",&nomes[i].codigo);
        printf("Preco do produto: ");
        scanf("%f",&nomes[i].preco);
        system("cls");
        mensagem();
    }
    system("cls");
    printf("------------------------------ L I S T A  D O S  P R O D U T O S ------------------------------ \n\n");
    printf("Codigo\t\t\tproduto\n");
    for(i = 0; i < quantProdutos; i++)
    {
        printf("%d\t\t\t%s\n",nomes[i].codigo,nomes[i].nomeProduto);
    }
    int codigo;
    printf("\nDigite o codigo do produto para consutar o preco: ");
    scanf("%d",&codigo);
    for(i = 0; i < quantProdutos; i++)
    {
        if(codigo == nomes[i].codigo)
        {
            printf("Produto: %s\n Preco: %.2f R$\n\n",nomes[i].nomeProduto,nomes[i].preco);
            logico = 1;
        }
    }

    if(logico == 0)
    {
        printf("\nProduto nao encontrado.\n");
        printf("\a");
    }

    return 0;
}
