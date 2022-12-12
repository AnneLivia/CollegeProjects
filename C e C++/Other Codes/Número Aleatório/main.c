#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void titulo()
{
    printf("======================= N U M E R O  D A  S O R T E =======================\n");
}
int main()
{
    titulo();
    setlocale(LC_ALL,"portuguese");
    int aposta,sorteio;
    srand(time(NULL));
    sorteio = rand();
    sorteio -=10000;
    printf("Digite o valor que deseja apostar de quatro digitos: ");
    scanf("%d",&aposta);
    if(aposta < 1000)
    {
        while(aposta < 1000)
        {

            printf("Por favor, digite o valor que deseja apostar de QUATRO digitos: ");
            scanf("%d",&aposta);
            system("cls");
            titulo();
        }
    }
    if(aposta==sorteio)
    {
        printf("Parabéns, você acertou!\nO número sorteiado foi: %d\n\n",sorteio);
    }
    else
    {
        printf("Que pena, não foi dessa vez!\nO número sorteiado foi: %d\n\n",sorteio);
    }
    return 0;
}
