#include <stdio.h>
#include <stdlib.h>

int main()
{

    int locais[7][7],distaciaTotal,d,o;
    distaciaTotal = 0;

    locais[0][0] = locais[1][1] = locais[2][2] = locais[3][3] = locais[4][4] = locais[5][5] = locais[6][6] = 0;
    locais[0][1] = locais[1][0] = 1611;
    locais[0][2] = locais[2][0] = 5298;
    locais[0][3] = locais[3][0] = 4397;
    locais[0][4] = locais[4][0] = 3250;
    locais[0][5] = locais[5][0] = 2100;
    locais[0][6] = locais[6][0] = 2933;
    locais[1][2] = locais[2][1] = 5763;
    locais[1][3] = locais[3][1] = 4865;
    locais[1][4] = locais[4][1] = 2805;
    locais[1][5] = locais[5][1] = 1389;
    locais[1][6] = locais[6][1] = 3127;
    locais[2][3] = locais[3][2] = 901;
    locais[2][4] = locais[4][2] = 4374;
    locais[2][5] = locais[5][2] = 5009;
    locais[2][6] = locais[6][2] = 3971;
    locais[3][4] = locais[4][3] = 3473;
    locais[3][5] = locais[5][3] = 4023;
    locais[3][6] = locais[6][3] = 3070;
    locais[4][5] = locais[5][4] = 1649;
    locais[4][6] = locais[6][4] = 429;
    locais[5][6] = locais[6][5] = 1962;

    char fim[2];
    do{
        system("cls");
        printf("Digite a cidade origem: \n0 - Belem\n1 - Fortaleza\n2 - Manaus\n3 - Porto Velho\n4 - Rio de Janeiro\n5 - Salvador\n6 - Sao Paulo\nDigite Aqui: ");
        scanf("%d",&o);
        printf("\nDigite a cidade destino: \n0 - Belem\n1 - Fortaleza\n2 - Manaus\n3 - Porto Velho\n4 - Rio de Janeiro\n5 - Salvador\n6 - Sao Paulo\nDigite Aqui: ");
        scanf("%d",&d);
        if(o != d){
            printf("\nDistancia: %d\n",locais[o][d]);
            distaciaTotal = distaciaTotal + locais[o][d];
        }else{
            printf("\nImpossivel calcular distancia.\n");
        }
        printf("\nDigite xx para finalizar. caso contrario aperte qualquer letra do teclado.\n");
        scanf("%s",&fim);
    }while(strcmpi(fim,"xx") != 0);
    system("cls");
    printf("Distancia Total: %d",distaciaTotal);
    return 0;
}
