#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;
    cout << "Digite o valor 1: ";
    cin >> n1;
    cout << "Digite o valor 2: ";
    cin >> n2;
    cout << "Digite o valor 3: ";
    cin >> n3;

    if((n1 < (n2 + n3)) || (n2 < (n1 + n3)) || (n3 < (n1 + n2))) {
        cout << "� tri�ngulo";
        if(n1 == n2 && n1 == n3)
            cout << " e equil�tero\n";
    } else {
        cout << "N�o � tri�ngulo";
    }
    cout << endl;
    return 0;
}
