#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int codigoLanche, quantidade;
    float valor = 0;
    cout << "----------- Card�pio -----------\n";
    cout << "Especifica��o    C�digo    Pre�o\n";
    cout << "Coxinha           100       3.35\n";
    cout << "Queijunto         101       2.10\n";
    cout << "P�o com ovo       102       1.50\n";
    cout << "Hamb�rger         103       4.78\n";
    cout << "Cheeseburger      104       5.31\n";
    cout << "Refrigerante      105       3.75\n";
    cout << "Digite o c�digo: ";
    cin >> codigoLanche;
    cout << "Digite a quantidade: ";
    cin >> quantidade;

    switch(codigoLanche) {
        case 100 :
            valor = 3.35 * quantidade;
            break;
        case 101 :
            valor = 2.10 * quantidade;
            break;
        case 102 :
            valor = 1.50 * quantidade;
            break;
        case 103 :
            valor = 4.78 * quantidade;
            break;
        case 104 :
            valor = 5.31 * quantidade;
            break;
        case 105 :
            valor = 3.75 * quantidade;
            break;
        default :
            cout << "N�mero digitado fora dos limites\n";
    }
    cout << "----------------------------------------------\n";
    cout << "Valor a ser pago: R$ " << valor << "\n";
    cout << "----------------------------------------------\n";
    return 0;
}
