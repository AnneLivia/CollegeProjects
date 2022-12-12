#include <stdio.h>
#include <stdlib.h>
float porc;

int main()
{
    int voto,i,total,quant[6] = {0,0,0,0,0,0};
    total = 0;
    float porc;
    do{
    printf("\n==========================V O T A C A O  E L E I T O R A L=====================================\n");
    printf("\nPara sair do sistema digite o valor de numero 9\n");
    printf("Qual o numero do seu candidato? \nDigite Aqui: ");
    scanf("%d",&voto);
    switch(voto){
     case 1 : voto = 0;
              printf("Voto computado para o candidato 1\n");
              quant[voto] = quant[voto] + 1; break;
     case 2 : voto = 1;
              printf("Voto computado para o candidato 2\n");
              quant[voto] = quant[voto] + 1; break;
     case 3 : voto = 2;
              printf("Voto computado para o candidato 3\n");
              quant[voto] = quant[voto] + 1; break;
     case 4 : voto = 3;
              printf("Voto computado para o candidato 4\n");
              quant[voto] = quant[voto] + 1; break;
     case 5 : voto = 4;
              printf("Voto computado para nulo \n");
              quant[voto] = quant[voto] + 1; break;
     case 6 : voto = 5;
              printf("Voto computado para Branco \n");
              quant[voto] = quant[voto] + 1; break;
     case 9 : printf("Computando resultados..."); break;
     default : printf("Opcao invalida\a\n");
    }
    if(voto != 9){
    total = total + 1;
    }
    system("pause");
    system("cls");
    }while(voto != 9);
    for(i = 0; i < 4;i++){
        printf("\nO total de votos para o candidato numero %d foi: %d\n",i,quant[i]);
    }
    printf("\nA quantidade de votos nulos foi: %d\n",quant[4]);
    printf("A quantidade de votos brancos foi: %d\n",quant[5]);
    printf("A quantidade total de votos foi: %d\n",total);
    porc = (float)quant[4]/total;
    printf("\nA porcentagem dos votos nulos sobre o total foi: %f\n",porc);
    porc = (float)quant[5]/total;
    printf("\nA porcentagem dos votos brancos sobre o total foi: %f\n",porc);

    return 0;
}
