#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    const int tamLinha = 6, tamColuna = 8;
    string matriz[tamLinha][tamColuna] = {{{" "}, {"C"},{"O"},{"L"},{"U"},{"N"},{"A"}},{"L"},{"I"},{"N"},{"H"},{"A"}};

    for ( int i = 1; i < tamLinha; i++) {
        for ( int j = 1; j < tamColuna - 1; j++) {
            cout << "matriz["<<i<<","<<j<<"]: ";
            cin >> matriz[i][j];
        }
        system("cls");
    }

    cout << "\n\n                --- Impressao da matriz ---\n\n";

    for ( int i = 0; i < tamLinha; i++) {
        cout << "          ";
        for ( int j = 0; j < tamColuna - 1; j++) {
           cout  << setw(5) << matriz[i][j];
        }
        cout << endl;
    }


    return 0;
}
