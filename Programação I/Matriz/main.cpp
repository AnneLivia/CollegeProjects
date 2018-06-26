#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int matriz[3][3];

    for ( int linha = 0; linha < 3; linha++) {
        for ( int coluna = 0; coluna < 3; coluna++) {
            cout << "Position [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }

    system("cls");
    cout << "\n\n";
    for ( int linha = 0; linha < 3; linha++) {
        for ( int coluna = 0; coluna < 3; coluna++) {
            cout << setw(8) << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }


    return 0;
}
