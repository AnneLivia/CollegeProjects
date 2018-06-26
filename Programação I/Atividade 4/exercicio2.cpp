#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL,"Portuguese");
    int n, maior[3] = {0}, menor[3] = {0};
    cout << "Defina o tamanho da matriz: ";
    cin >> n;
    system("cls");
    int mat[n][n];
    cout << "Insira os valores da matriz: \n";
    for ( int i = 0; i < n; i++) {
        cout << "\n---------------------------------------\n\n";
        for ( int j = 0; j < n; j++) {
            cout << "MATRIZ["<<i<<"]["<<j<<"] = ";
            cin >> mat[i][j];
        }
    }


    menor[0] = mat[0][0];
    maior[0] = mat[0][0];

    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < n; j++) {
            if(menor[0] > mat[i][j]) {
                menor[0] = mat[i][j];
                menor[1] = i;
                menor[2] = j;
            }

            if(maior[0] < mat[i][j]) {
                maior[0] = mat[i][j];
                maior[1] = i;
                maior[2] = j;
            }
        }
    }

    cout << "\n\nMenor valor: " << menor[0] << ", posição: " << menor[1] << "," << menor[2] << endl;
    cout << "Maior valor: " << maior[0] << ", posição: " << maior[1] << "," << maior[2] << endl;
    return 0;
}

