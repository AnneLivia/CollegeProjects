#include <iostream>
#include <cstdlib>
#include <clocale>
#include <climits>

using namespace std;


int main() {

    setlocale(LC_ALL,"Portuguese");
    int maior = INT_MIN, valor; // Inicializando a variavel maior com o valor que consta na macro INT_MIN que é -2147483648, menor valor que pode ser armazena na variavel do tipo int
    for ( int i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << "º valor: ";
        cin >> valor;
        if(valor > maior)
            maior = valor;
    }

    cout << "Maior valor: " << maior << endl;
    return 0;
}
