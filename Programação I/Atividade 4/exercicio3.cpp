#include <iostream>
#include <iomanip>
#include <clocale>
#define TAM 5

using namespace std;

int main() {
    // Must Finish
    setlocale(LC_ALL, "Portuguese");
    float mat[TAM][TAM], soma3linha;
    float soma4coluna, multi2e5 = 1, diagonalP, diagonalS;

    soma4coluna = soma3linha = diagonalP = diagonalS = 0;

    cout << "Insira os valores na matriz:\n\n";
    for ( int i = 0; i < TAM; i++) {

        for ( int j = 0; j < TAM; j++) {
            cout << "MATRIZ["<<i<<"]["<<j<<"]: ";
            cin >> mat[i][j];
        }

        cout << "----------------------------------\n";
    }

    system("cls");

    for ( int i = 0; i < TAM; i++) {
        for ( int j = 0; j < TAM; j++) {
            cout << " " << mat[i][j] << " ";
        }
        cout << endl;
    }

    int linhaD2 = 0, colunaD2 = TAM - 1;
    for ( int i = 0; i < TAM; i++) {
        for ( int j = 0; j < TAM; j++) {
            if(i == 2) // Soma dos elementos da 3� linha
                soma3linha+=mat[i][j];
            if(j == 3) // Soma dos elementos da 4� coluna
                soma4coluna+=mat[i][j];
            if(i == j) // Diagonal principal
                diagonalP+=mat[i][j];
            if(i == linhaD2++ && j == colunaD2--)
                diagonalS+=mat[i][j];
        }
    }

    diagonalP/=5;
    diagonalS*=5;

    cout << "\n\nSoma dos elementos da terceira linha: " << soma3linha << endl;
    cout << "Soma dos elementos da quarta coluna: " << soma4coluna << endl;
    cout << "Divis�o da soma dos elementos da diagonal principal por 5: " << diagonalP << endl;
    cout << "Multiplica��o da soma dos elementos da diagonal segundaria por 5: " << diagonalS << endl;
    return 0;
}
