#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int option;
    float n1, n2;
    cout << "------------------- C A L C U L A D O R A -------------------" << endl;
    cout << "1 - SUM\n";
    cout << "2 - SUBTRACTION\n";
    cout << "3 - DIVISION\n";
    cout << "4 - MULTIPLICATION\n";
    cout << "Type here: ";
    cin >> option;
    system("cls");
    cout << "------------------- C A L C U L A D O R A -------------------" << endl;
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;
    system("cls");
    cout << "------------------- C A L C U L A D O R A -------------------" << endl;
    switch(option) {
        case 1 :
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;
        case 2 :
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
            break;
        case 3 :
            cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
            break;
        case 4 :
            cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
            break;
        default:
            cout << "Wrong option\n";
    }

    return 0;
}
