#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

/*
    Setw() - serve para manipular stream. define a largura, o padrão é 0
*/
int main() {

    int mat[3][3];

    for ( int i = 0; i < 3; i++) {
        cout << "Insira os valores da matriz: \n";
        for ( int j = 0; j < 3; j++) {
            cout << "MATRIZ["<<i<<"]["<<j<<"] = ";
            cin >> mat[i][j];
        }
        system("cls");
    }

    cout << "\n\n Matriz \n\n";
    for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {
            cout << setw(6) << mat[i][j];
        }
        cout << endl;
    }

    cout << "\n\n Matriz Ordem Inversa\n\n";
    for ( int i = 2; i >= 0; i--) {
        for ( int j = 2; j >= 0; j--) {
            cout << setw(6) << mat[i][j];
        }
        cout << endl;
    }


    return 0;
}
