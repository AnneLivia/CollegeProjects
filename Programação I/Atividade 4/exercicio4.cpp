#include <iostream>
#include <iomanip>
#include <clocale>
#define TAM 4

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mat[TAM][TAM], impar[TAM*TAM], par[TAM*TAM], iteradordoImpar, iteradorDoPar;
    iteradordoImpar = iteradorDoPar = 0;
    cout << "Insira os valores da matriz: \n";
    for ( int i = 0; i < TAM; i++) {
        for ( int j = 0; j < TAM; j++) {
            cout << "MAT["<<i<<"]["<<j<<"]: ";
            cin >> mat[i][j];
            if(mat[i][j] % 2 == 0)
                par[iteradorDoPar++] = mat[i][j];
            else
                impar[iteradordoImpar++] = mat[i][j];
        }
        cout << "----------------------------\n";
    }
    system("cls");
    cout << "                           --- MATRIZ --- \n\n";
    for ( int i = 0; i < TAM; i++) {
        cout << "                       ";
        for ( int j = 0; j < TAM; j++) {
            cout << setw(4) << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\n --- Impar:  ";
    for ( int i = 0; i < iteradordoImpar; i++) {
        cout << impar[i] << " ";
    }

    cout << "\n\n --- Par:  ";
    for ( int i = 0; i < iteradorDoPar; i++) {
        cout << par[i] << "  ";
    }
    cout << endl;
    return 0;
}
