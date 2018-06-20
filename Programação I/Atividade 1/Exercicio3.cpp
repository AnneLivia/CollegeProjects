#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario;
    char plano;
    cout << "Digite o seu salário: " << endl;
    cin >> salario;
    cout << "Digite o plano de trabalho:\nA, B ou C: ";
    cin >> plano;
    system("cls");
    switch(plano) {
        case 'A' :
            salario += ((salario * 10)/100);
            break;
        case 'B' :
            salario += ((salario * 15)/100);
            break;
        case 'C' :
            salario += ((salario * 20)/100);
    }

    cout << "Plano de trabalho: " << plano << endl;
    cout << "Novo salário: R$" << salario << endl;
    return 0;
}
