#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int quantidade;
    double rendaDoJogo;

    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidade;

    rendaDoJogo = (quantidade * 0.23) * 100;
    rendaDoJogo += (quantidade * 0.41) * 250;
    rendaDoJogo += (quantidade * 0.27) * 600;
    rendaDoJogo += (quantidade * 0.09) * 2000;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "A renda total do jogo foi: R$ " << rendaDoJogo << endl;
    return 0;
}

