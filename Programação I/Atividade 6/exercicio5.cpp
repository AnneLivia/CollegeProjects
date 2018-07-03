#include <iostream>
#include <clocale>
#include <cstdlib>
#define TAM 16
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int vetA[TAM], vetB[TAM], iterador = 0;

    cout << "Insira os valores no vetor: \n";
    for ( int i = 0; i < TAM; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetA[i];
    }

    system("cls");

    for ( int i = TAM/2; i < TAM; i++) {
        vetB[iterador++] = vetA[i];
    }

    for ( int i = 0; i < TAM/2; i++) {
        vetB[iterador++] = vetA[i];
    }

    cout << "Vetor Digitado: \n";
    for ( int i = 0; i < TAM; i++) {
        cout << vetA[i] << " ";
    }

    cout << "\n\nVetor Gerado: \n";
    for ( int i = 0; i < iterador; i++) {
        cout << vetB[i] << " ";
    }
    cout << endl;



    return 0;
}

