#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;


int main() {

    setlocale(LC_ALL,"Portuguese");
    int ladoQuadrado;

    cout << "Digite o lado do quadrado: ";
    cin >> ladoQuadrado;
    while (ladoQuadrado < 5 || ladoQuadrado > 10) {
        system("cls");
        cout << "Valor invalido.\nDigite o lado do quadrado novamente: ";
        cin >> ladoQuadrado;
    }
    system("cls");
    cout << "\n Quadrado de lado: " << ladoQuadrado << endl;
    cout << "\n\n";
    for ( int i = 0; i < ladoQuadrado; i++) {
        for(int j = 0; j < ladoQuadrado; j++) {
            if(j == 0)
                cout << "         [";
            if(i == 0 || i == ladoQuadrado - 1)
                cout << "--";
            else
                cout << "  ";
            if (j == ladoQuadrado - 1)
                cout << "]\n";
        }
    }

    return 0;
}

