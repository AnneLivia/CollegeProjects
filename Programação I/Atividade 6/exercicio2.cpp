#include <iostream>
#include <cstdlib>
#include <clocale>
#include <iomanip>
#include <ctime>
#include <cstring>
#define TAM 3

using namespace std;

void imprimirMatriz(char mat[][TAM]) {
    for ( int i = 0; i < TAM; i++) {
        if(i != 0)
            cout << "\n                          -----------------\n";
        cout << "                           ";
        for ( int j = 0; j < TAM; j++) {
            if(j != 0)
                cout << "  | ";
            cout << setw(2) << mat[i][j];
        }
    }
}

void showMensage() {
    cout << "---------------------- J O G O  D A  V E L H A --------------------\n\n";
}

void showOpcaoJogo() {
    cout << "                    ESCOLHA: \n";
    cout << "                    1 - X\n";
    cout << "                    2 - O\n";
    cout << "                    3 - VOLTAR\n";
    cout << "                    DIGITE A OPÇÃO DESEJADA: ";
}

bool preencheu(char mat[][TAM]) {
    int contador = 0;
    for ( int i = 0; i < TAM; i++) {
        for ( int j = 0; j < TAM; j++) {
            if(mat[i][j] == 'X' || mat[i][j] == 'O')
                contador++;
        }
    }
    if(contador == TAM*TAM)
        return true;
    return false;
}

bool existeGanhador(char mat[][TAM], char jogadorSimbolo) {

    bool ok = false;

    // Verificar linhas
    for ( int i = 0; i < TAM; i++) {
        if(mat[i][0] == jogadorSimbolo && mat[i][1] == jogadorSimbolo && mat[i][2] == jogadorSimbolo)
            ok = true;
    }

    // Verificar colunas
    for ( int i = 0; i < TAM; i++) {
        if(mat[0][i] == jogadorSimbolo && mat[1][i] == jogadorSimbolo && mat[2][i] == jogadorSimbolo)
            ok = true;
    }

    // Verificar diagonal principal
    if(mat[0][0] == jogadorSimbolo && mat[1][1] == jogadorSimbolo && mat[2][2] == jogadorSimbolo)
            ok = true;
    // Verificar diagonal segundaria
    if(mat[0][2] == jogadorSimbolo && mat[1][1] == jogadorSimbolo && mat[2][0] == jogadorSimbolo)
            ok = true;

    if(ok) {
        for ( int i = 0; i < TAM; i++) {
            for ( int j = 0; j < TAM; j++) {
                if(mat[i][j] != jogadorSimbolo)
                    mat[i][j] = tolower(mat[i][j]); // Recebendo ou a letra O ou a X em minuscula
            }
        }
        return true;
    }

    return false;
}

int main() {

    srand (time(NULL)); // Para gerar um valor diferente a cada vez que o programa roda, baseado no tempo
    setlocale(LC_ALL,"Portuguese");
    char jogoDaVelha[TAM][TAM], jogador, computadorOUjogador2;
    int linha, coluna, opcao, opcaoXouO, vezJogador;
    bool ganhador;

    do {
        ganhador = false;
        memset(jogoDaVelha,' ', TAM*TAM); // Função utilizada para inicializar a matriz
        system("cls");
        showMensage();
        cout << "                    1 - JOGAR COM O COMPUTADOR\n";
        cout << "                    2 - JOGAR COM JOGADOR 2\n";
        cout << "                    3 - COMO JOGAR?\n";
        cout << "                    4 - SAIR\n";
        cout << "                    DIGITE A OPÇÃO DESEJADA: ";
        cin >> opcao;
        system("cls");
        switch(opcao) {
            case 1 :
                showMensage();
                showOpcaoJogo();
                cin >> opcaoXouO;
                if(opcaoXouO == 1) {
                    jogador = 'X';
                    computadorOUjogador2 = 'O';
                } else if (opcaoXouO == 2) {
                    jogador = 'O';
                    computadorOUjogador2 = 'X';
                } else {
                    continue;
                }

                while(!preencheu(jogoDaVelha) && !ganhador) {
                    system("cls");
                    showMensage();
                    imprimirMatriz(jogoDaVelha);

                    cout << "\n\n Digite a linha: ";
                    cin >> linha;
                    cout << " Digite a coluna: ";
                    cin >> coluna;
                    system("cls");
                    if(jogoDaVelha[linha - 1][coluna - 1] == 'X' || jogoDaVelha[linha - 1][coluna - 1] == 'O' ||
                       linha < 0 || linha > 3 || coluna < 0 || coluna > 3) {
                        showMensage();
                        cout << "\n                           JOGADA INVALIDA\n\n";
                        cout << "  Valores invalidos para linha/coluna ou o local já foi preenchido\n\n";
                        system("pause");
                        continue; // Pular execução para não deixar o computador jogar
                    } else {
                        jogoDaVelha[linha - 1][coluna - 1] = jogador;
                    }

                    int achouEspaco = 0; // Para rodar o loop até que o computador ache um espaço vazio na matriz
                    while(!achouEspaco && !preencheu(jogoDaVelha)) {
                        linha = rand() % 3;
                        coluna = rand() % 3;
                        if(jogoDaVelha[linha][coluna] != 'X' && jogoDaVelha[linha][coluna] != 'O') {
                            jogoDaVelha[linha][coluna] = computadorOUjogador2;
                            achouEspaco = 1;
                        }
                    }
                    system("cls");
                    ganhador = existeGanhador(jogoDaVelha,jogador); // Verificar se o jogador ganhou
                    if(ganhador) {
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n\n                          O JOGADOR GANHOU\n\n";
                        system("pause");
                    } else {
                        ganhador = existeGanhador(jogoDaVelha,computadorOUjogador2); // Verificar se o computador ganhou
                        if(ganhador) {
                            showMensage();
                            imprimirMatriz(jogoDaVelha);
                            cout << "\n\n                         O COMPUTADOR GANHOU\n\n";
                            system("pause");
                        }
                    }

                    if(preencheu(jogoDaVelha) && !ganhador) {
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n\n                       O JOGO TERMINOU EMPATADO\n\n";
                        system("pause");
                    }
                }
                break;
            case 2 :
                showMensage();
                showOpcaoJogo();
                cin >> opcaoXouO;
                if(opcaoXouO == 1) {
                    jogador = 'X';
                    computadorOUjogador2 = 'O';
                } else if (opcaoXouO == 2) {
                    jogador = 'O';
                    computadorOUjogador2 = 'X';
                } else {
                    continue; // Caso o usuario tecle 3 para voltar ou qualquer outro valor além de 1 e 2
                }

                while(!preencheu(jogoDaVelha) && !ganhador) {
                    system("cls");
                    vezJogador = 1;
                    while(vezJogador == 1 && !preencheu(jogoDaVelha)) {
                        system("cls");
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n Vez do jogador 1\n";
                        cout << "\n Digite a linha: ";
                        cin >> linha;
                        cout << " Digite a coluna: ";
                        cin >> coluna;
                        system("cls");
                        if(jogoDaVelha[linha - 1][coluna - 1] == 'X' || jogoDaVelha[linha - 1][coluna - 1] == 'O' ||
                           linha < 0 || linha > 3 || coluna < 0 || coluna > 3) {
                            showMensage();
                            cout << "\n                           JOGADA INVALIDA\n\n";
                            cout << "  Valores invalidos para linha/coluna ou o local já foi preenchido\n\n";
                            system("pause");
                        } else {
                            jogoDaVelha[linha - 1][coluna - 1] = jogador;
                            vezJogador = 2;
                        }
                    }

                    ganhador = existeGanhador(jogoDaVelha,jogador); // Verificar se o jogador ganhou
                    if(ganhador) {
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n\n                         O JOGADOR 1 GANHOU\n\n";
                        system("pause");
                        continue; // Pula a execução sem deixar o jogador 2 jogar
                    }

                    while(vezJogador == 2 && !preencheu(jogoDaVelha)) { // enquanto for a vez do jogador 2 e não estiver preenchido
                        system("cls");
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n Vez do jogador 2\n";
                        cout << "\n Digite a linha: ";
                        cin >> linha;
                        cout << " Digite a coluna: ";
                        cin >> coluna;
                        system("cls");
                        if(jogoDaVelha[linha - 1][coluna - 1] == 'X' || jogoDaVelha[linha - 1][coluna - 1] == 'O' ||
                           linha < 0 || linha > 3 || coluna < 0 || coluna > 3) {
                            showMensage();
                            cout << "\n                           JOGADA INVALIDA\n\n";
                            cout << "  Valores invalidos para linha/coluna ou o local já foi preenchido\n\n";
                            system("pause");
                        } else {
                            jogoDaVelha[linha - 1][coluna - 1] = computadorOUjogador2;
                            vezJogador = 1;
                        }
                    }

                    system("cls");
                    ganhador = existeGanhador(jogoDaVelha,computadorOUjogador2); // Verificar se o jogador 2 ganhou
                    if(ganhador) {
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n\n                         O JOGADOR 2 GANHOU\n\n";
                        system("pause");
                    }

                    if(preencheu(jogoDaVelha) && !ganhador) {
                        showMensage();
                        imprimirMatriz(jogoDaVelha);
                        cout << "\n\n                      O JOGO TERMINOU EMPATADO\n\n";
                        system("pause");
                    }
                }
                break;
            case 3:
                showMensage();
                cout << "\n\n       PARA JOGAR BASTA DIGITAR A LINHA E A COLUNA DESEJADA\n\n";
                cout << "\n\n                             1     2     3 \n\n";
                for ( int i = 0; i < TAM; i++) {
                    if(i != 0)
                        cout << "\n                           -----------------\n";
                    cout << "                      " << i + 1 << "     ";
                    for ( int j = 0; j < TAM; j++) {
                        if(j != 0)
                            cout << "  | ";
                        cout << setw(2) << jogoDaVelha[i][j];
                    }
                }
                cout << "\n\n\n  VOCÊ PODE JOGAR TANTO COM O COMPUTADOR QUANTO COM OUTRO JOGADOR\n\n";
                cout << "\n\n";
                system("pause");
                break;
            case 4:
                showMensage();
                cout << "\n                           JOGO FINALIZADO\n\n";
                cout << "\n                     DESENVOLVIDO POR ANNE LIVIA\n\n";
                break;
        }
    } while (opcao != 4);
    return 0;
}
