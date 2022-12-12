#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;
    float preco,aumento;

    printf("Qual o preco do produto: ");
    scanf("%f",&preco);
    printf("Qual o codigo do produto: ");
    scanf("%d",&codigo);
    switch(codigo){
     case 1 : aumento = preco + (preco*15/100);
              printf("O produto recebeu um aumento de 15%% agora ele custa %.2f R$",aumento);
              break;
     case 3 : aumento = preco + (preco*20/100);
              printf("O produto recebeu um aumento de 20%% agora ele custa %.2f R$",aumento);
              break;
     case 4 : aumento = preco + (preco*35/100);
              printf("O produto recebeu um aumento de 35%% agora ele custa %.2f R$",aumento);
              break;
     case 8:  aumento = preco + (preco*40/100);
              printf("O produto recebeu um aumento de 40%% agora ele custa %.2f R$",aumento);
              break;
     default : printf("Codigo nao referente ao produto");
    }
    return 0;
}
