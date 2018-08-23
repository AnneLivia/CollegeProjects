#include <iostream>
#include <clocale>
#include <cstdlib>

/*
    Developed by Anne Livia da Fonseca Macedo
*/

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

    int vet[10], num, vetGerado[9], iterador = 0, existe = 0;

    cout << "Insira os valores no vetor: \n";
    for ( int i = 0; i < 10; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

    cout << "\nDigite um valor: ";
    cin >> num;

    system("cls");

    cout << "Vetor digitado: \n";
    for ( int i = 0; i < 10; i++) {
        cout << vet[i] << " ";
        if(vet[i] == num)
            existe = 1;
    }
    cout << endl;

    if(existe) {
        for ( int i = 0; i < 10; i++) {
            if(!busca(vetGerado,iterador,vet[i]) && vet[i] != num)
                vetGerado[iterador++] = vet[i];
        }

        cout << "Novo vetor sem o número " << num << ": " << endl;
        for ( int i = 0; i < iterador; i++) {
            cout << vetGerado[i] << " ";
        }
        cout << endl;

    } else {
        cout << "O " << num << " não existe no vetor\n";
    }


    return 0;
}
