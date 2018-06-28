#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    string nomes[10], nome;
    bool esta = false;
    cout << "Digite os nomes: \n";
    for ( int i = 0; i < 10; i++) {
        cout << i + 1 << "ª nome: ";
        cin >> nomes[i];
    }

    cout << "Digite o nome que deseja procurar: ";
    cin >> nome;

    for ( int i = 0; i < 10; i++) {
        if(nome == nomes[i])
            esta = true;
    }

    if(esta)
        cout << nome << " está no vetor\n";
    else
        cout << nome << " não está entre os 10\n";

    return 0;
}
