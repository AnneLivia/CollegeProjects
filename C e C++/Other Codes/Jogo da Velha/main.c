#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char matriz[3][3];

char check(void);
void get_player_move(void);
void init_matriz(void);
void get_computer_move(void);
void disp_matriz(void);
void winner_matriz(void);
void winner_matriz2(void);
void title(void)
{
    printf("\n----------------------------------------------- J O G O  D A  V E L H A ------------------------------------------------\n\n");
}
void main()
{
    setlocale(LC_ALL,"portuguese");
    char done;
    title();
    system("cls");
    title();


    printf("JOGADOR x COMPUTADOR.\n\n");

    done = ' ';
    init_matriz();

    do{
       disp_matriz();
       get_player_move();
       done = check(); // Verifica se há vencedor
       if(done != ' ')
       {
           break;        // Vencedor
       }
       get_computer_move();
       done = check(); // Verifica se há vencedor
       system("cls");
       title();
       printf("JOGADOR x COMPUTADOR.\n\n");
    }while(done == ' ');
        system("cls");
        title();
        printf("JOGADOR x COMPUTADOR.\n\n");
    if(done == 'X')
    {
        printf("VOCÊ GANHOU!\n\n");
        winner_matriz();  // Mostrar as posições finais
    }
    else if(done == 'O')
    {
        printf("COMPUTADOR GANHOU!\n\n");
        winner_matriz2();
    }
    else
    {
        disp_matriz();
    }

}


// Iniciar matriz
void init_matriz(void)
{
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matriz[i][j] = ' ';
        }
    }
}
// Obtém a sua jogada

void get_player_move(void)
{
    int x;
    printf("\nJOGADOR 1\n");
    printf("\nDe 1 a 9 digite o número onde deseja colocar o X de acordo com o gráfico abaixo.\n\n"
           " _1_|_2_|_3_\n"
           " _4_|_5_|_6_\n"
           " _7_|_8_|_9_ \n");
    printf("\nDigite o número para o X: \n");

    scanf("%d",&x);
    switch(x)
    {
        case 1 : if(matriz[0][0] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");
                     system("pause");
                     system("cls");

                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[0][0] = 'X';
                 }
                 break;

         case 2 : if(matriz[0][1] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");

                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[0][1] = 'X';
                 }
                 break;

         case 3 : if(matriz[0][2] != ' ')
                  {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                  }
                  else
                 {
                    matriz[0][2] = 'X';
                 }
                 break;

         case 4 : if(matriz[1][0] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[1][0] = 'X';
                 }
                 break;

         case 5 : if(matriz[1][1] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[1][1] = 'X';
                 }
                 break;

         case 6 : if(matriz[1][2] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[1][2] = 'X';
                 }
                 break;
         case 7 : if(matriz[2][0] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[2][0] = 'X';
                 }
                 break;
         case 8 : if(matriz[2][1] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");
                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[2][1] = 'X';
                 }
                 break;
         case 9 : if(matriz[2][2] != ' ')
                 {
                     printf("Posição Invalida, tente novamente.\n");

                     system("pause");
                     system("cls");
                     title();
                     printf("JOGADOR x COMPUTADOR.\n\n");
                     disp_matriz();
                     get_player_move();
                     title();
                 }
                  else
                 {
                    matriz[2][2] = 'X';
                 }
                 break;

    }

}

// Obtém uma jogada do computador

void get_computer_move(void)
{
    int i,j;
    printf("\nCOMPUTADOR\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matriz[i][j] == ' ')
            {
                break;
            }
        }
        if(matriz[i][j] == ' ')
        {
                break;
        }
    }
    if(i * j == 9)
    {
        printf("Empate.\n");
        exit(0);
    }
    else
    {
        matriz[i][j] = 'O';
    }
}
// Mostrar a matriz na tela

void disp_matriz(void)
{
    int t;
    for(t = 0; t < 3; t++)
    {
        printf(" %c |  %c  | %c",matriz[t][0],matriz[t][1],matriz[t][2]);
        if(t != 2)
        {
            printf("\n___|_____|___\n");
        }
        printf("\n");
    }
}
void winner_matriz(void)
{
    int t;
    for(t = 0; t < 3; t++)
    {
        if(matriz[t][0] == 'O')
            matriz[t][0] = 'o';

        if(matriz[t][1] == 'O')
            matriz[t][1] = 'o';

        if(matriz[t][2] == 'O')
            matriz[t][2] = 'o';

        printf(" %c |  %c  | %c",matriz[t][0],matriz[t][1],matriz[t][2]);
        if(t != 2)
        {
            printf("\n___|_____|___\n");
        }
        printf("\n");
    }
}
void winner_matriz2(void)
{
    int t;
    for(t = 0; t < 3; t++)
    {
        if(matriz[t][0] == 'X')
            matriz[t][0] = 'x';

        if(matriz[t][1] == 'X')
            matriz[t][1] = 'x';

        if(matriz[t][2] == 'X')
            matriz[t][2] = 'x';

        printf(" %c |  %c  | %c",matriz[t][0],matriz[t][1],matriz[t][2]);
        if(t != 2)
        {
            printf("\n___|_____|___\n");
        }
        printf("\n");
    }
}


// Verifica se há um vencedor

char check(void)
{
    int i;
    // Verificar as linhas
    for(i = 0; i < 3; i++)
    {
        if(matriz[i][0]== matriz[i][1] && matriz[i][0] == matriz[i][2])
        {
            return matriz[i][0];
        }
    }
    // Verificar as colunas
    for(i = 0; i < 3; i++)
    {
        if(matriz[0][i]== matriz[1][i] && matriz[0][i] == matriz[2][i])
        {
            return matriz[0][i];
        }
    }

    // Verificar as diagonais
    // Verificar as colunas
    if(matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2])
    {
            return matriz[0][0];
    }
    if(matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0])
    {
            return matriz[0][2];
    }

    return ' ';
}

