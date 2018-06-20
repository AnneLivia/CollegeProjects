#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "------------------ T A B U A D A ------------------\n";
    cout << "Digite um valor: ";
    cin >> n;
    system("cls");
    cout << "------------------ T A B U A D A ------------------\n\n";
    for ( int i = 0; i <= 10; i++) {
        cout << " " << n << " x " << i << " = " << n * i << endl;
    }
    cout << "\n---------------------------------------------------\n";
    return 0;
}
