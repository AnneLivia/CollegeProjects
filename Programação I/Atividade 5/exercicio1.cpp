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
        cout << "É triângulo";
        if(n1 == n2 && n1 == n3)
            cout << " e equilátero\n";
    } else {
        cout << "Não é triângulo";
    }
    cout << endl;
    return 0;
}
