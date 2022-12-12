#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct{
      char marca[15];
      int ano;
      float preco;
    } automovel;
    int quant, i;
    printf("Digite a quantidade de carros: ");
    scanf("%d",&quant);

    automovel carro[quant];

    for(i = 0; i < quant; i++)
    {
        setbuf(stdin,NULL);
        printf("Marca do carro: ");
        gets(carro[i].marca);
        printf("Ano do carro: ");
        scanf("%d",&carro[i].ano);
        printf("Preco do carro: ");
        scanf("%f",&carro[i].preco);
        system("cls");
    }
    float p;
    printf("Digite um preco para busca: ");
    scanf("%f",&p);

    while(p != 0)
    {
        int cont = 0;
        for(i = 0; i < quant; i++)
        {


            if(carro[i].preco < p)
            {
                    printf("CARRO: %s\n"
                            "ANO: %d\n"
                            "PRECO: %.3f R$\n",carro[i].marca,
                                               carro[i].ano,
                                               carro[i].preco);
                    cont++;
            }

            printf("\n");
        }
        if(cont == 0)
        {
            printf("Nao ha nenhum carro com preco menor que %.3f\n",p);
        }
        printf("Digite um preco para busca ou digite 0 para sair do programa: ");
        scanf("%f",&p);
    }
    printf("\nPrograma finalizado....");
    return 0;
}
