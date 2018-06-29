#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

bool busca(int vet[], int t, int num) {
    for ( int i = 0; i < t; i++) {
        if(vet[i] == num)
            return true;
    }
    return false;

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetA[10], vetB[10], vetC[10], iteradorC = 0;

    cout << "Digite os valores do vetor A: \n";
    for ( int i = 0; i < 10; i++) {
        cout << i + 1 << "º valor: ";
        cin >> vetA[i];
    }

    system("cls");

    cout << "Digite os valores do vetor B: \n";
    for ( int i = 0; i < 10; i++) {
        cout << i + 1 << "º valor: ";
        cin >> vetB[i];
    }

    for ( int i = 0; i < 10; i++) {
        if(busca(vetA,10,vetB[i]) && !busca(vetC,iteradorC,vetB[i]))
            vetC[iteradorC++] = vetB[i];
    }


    system("Cls");

    cout << "Vetor A: ";
    for ( int i = 0; i < 10; i++) {
        cout << vetA[i] << " ";
    }

    cout << endl;

    cout << "Vetor B: ";
    for ( int i = 0; i < 10; i++) {
        cout << vetB[i] << " ";
    }

    cout << endl;

    cout << "Vetor C: ";
    for ( int i = 0; i < iteradorC; i++) {
        cout << vetC[i] << " ";
    }

    return 0;
}
