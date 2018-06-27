#include <iostream>
#include <iomanip>
#include <clocale>
#define TAM 5

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    float mat[TAM][TAM], vet[TAM], soma3linha, soma4coluna, diagonalP, diagonalS;

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
    cout << "\n\n";
    for ( int i = 0; i < TAM; i++) {
        cout << "              ";
        for ( int j = 0; j < TAM; j++) {
            cout << setw(6) << mat[i][j] << " ";
        }
        cout << "\n\n";
    }

    int linhaD2 = 0, colunaD2 = TAM - 1;
    for ( int i = 0; i < TAM; i++) {
        vet[i] = mat[1][i] * mat[i][4]; // Multiplicação da segunda linha pela 5 coluna
        for ( int j = 0; j < TAM; j++) {
            if(i == 2) // Soma dos elementos da 3ª linha
                soma3linha += mat[i][j];
            if(j == 3) // Soma dos elementos da 4ª coluna
                soma4coluna += mat[i][j];
            if(i == j) // Diagonal principal
                diagonalP += mat[i][j];
            if(i == linhaD2 && j == colunaD2) { // Diagonal segundária
                diagonalS += mat[i][j];
                linhaD2++; colunaD2--;
            }
        }
    }

    diagonalP /= 5;
    diagonalS *= 5;

    cout << "\n\n Soma dos elementos da terceira linha: " << soma3linha << endl;
    cout << " Soma dos elementos da quarta coluna: " << soma4coluna << endl;
    cout << " Mult. da segunda linha pela quinta coluna: ";
    for(int i = 0; i < TAM; i++)
        cout << vet[i] << " ";

    cout << "\n Divisão da soma dos elementos da diagonal principal por 5: " << diagonalP << endl;
    cout << " Mult. da soma dos elementos da diagonal segundaria por 5: " << diagonalS << endl;
    return 0;
}
