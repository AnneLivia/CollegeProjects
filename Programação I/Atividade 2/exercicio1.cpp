#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    string nome[5];

    for ( int i = 0; i < 5; i++) {
        cout << "Nome[" << i << "] = ";
        cin >> nome[i];
    }

    cout << endl;

    for ( int i = 4; i >= 0; i--) {
        cout << i << "º nome: " << nome[i] << endl;
    }

    return 0;
}
