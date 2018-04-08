#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, opniao, i,quantpR,quantpB,quantpO,somaidade;
    quantpR = quantpB = quantpO = somaidade = 0;
    float media;

    for(i=0;i<15;i++)
    {
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        printf("Qual a sua opniao em relacao ao filme: \n1 - Regular\n2 - Bom\n3 - Otimo\nDigite aqui: ");
        scanf("%d",&opniao);
        system("cls");
        switch(opniao)
        {
        case 1 : printf("Regular\nObrigada pela participacao!\n\n");
                 quantpR +=1;
                 break;
        case 2 : printf("Bom\nObrigada pela participacao!\n\n");
                 quantpB +=1;
                 break;
        case 3 : printf("Otimo\nObrigada pela participacao!\n\n");
                 somaidade +=idade;
                 quantpO +=1;
                 break;
        default : printf("Opcao invalida\n\n");
        }
    }
    media = (float)somaidade/quantpO;

    if(media==0)
    {
        printf("\nNinguem respondeu otimo\n");
    }
    else
    {
        printf("\nMedia de idade das pessoas que responderam otimo: %.2f\n",media);

    }
    float porc;
    porc = (quantpB/15.00)*100;
    printf("\nQuantidade de pessoas que responderam regular: %d\n",quantpR);
    printf("Porcentagem de pessoas que responderam bom: %f",porc);
    return 0;
}
