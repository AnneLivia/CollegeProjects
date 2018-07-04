#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdlib>
#define TAM 5

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mat[TAM][TAM], maiorValor, linha, menorElemento, coluna;


    for ( int i = 0; i < TAM; i++) {
        cout << "Insira os valores na Matriz: \n";
        for ( int j = 0; j < TAM; j++) {
            cout << "MAT["<<i+1<<"]["<<j+1<<"]: ";
            cin >> mat[i][j];
        }
        system("cls");
    }

    maiorValor = mat[0][0];

    for ( int i = 0; i < TAM; i++) {
        for ( int j = 0; j < TAM; j++) {
            if(mat[i][j] >= maiorValor) {
                maiorValor = mat[i][j];
                linha = i;
            }
        }
    }


    menorElemento = mat[linha][0];

    for ( int i = 0; i < TAM; i++) {
        if(menorElemento >= mat[linha][i]) {
            menorElemento = mat[linha][i];
            coluna = i;
        }
    }

    system("cls");
    cout << "Matriz\n\n";
    for ( int i = 0; i < TAM; i++) {
        for ( int j = 0; j < TAM; j++) {
            cout << setw(6) << mat[i][j];
        }
        cout << endl;
    }

    cout << "\nO maior valor é " << maiorValor << endl;
    cout << "\nMenor elemento: " << menorElemento << endl;
    cout << "Linha: " << linha + 1 << endl;
    cout << "Coluna: " << coluna + 1 << endl;

    return 0;
}


