#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL,"Portuguese");
    string sair;
    int codigo, quantidade;
    float valor = 0.0;

    do {
        cout << "------- L A N C H O N E T E -------\n";
        cout << "ESPECIFICAÇÃO --- CÓDIGO ---- PREÇO\n";
        cout << "COXINHA ---------  100 ------ 3.35\n";
        cout << "QUEIJUNTO -------  101 ------ 2.10\n";
        cout << "PÃO COM OVO -----  102 ------ 1.50\n";
        cout << "HAMBÚRGER -------  103 ------ 4.78\n";
        cout << "CHEESEBURGUER ---  104 ------ 5.31\n";
        cout << "REFRIGERANTE ----  105 ------ 3.75\n";
        cout << "Digite o código do pedido: ";
        cin >> codigo;
        cout << "Digite a quantidade: ";
        cin >> quantidade;
        cout << "\n\n";
        switch(codigo) {
            case 100:
                cout << "Lanche adquirido: COXINHA\n";
                valor+=(quantidade*3.35);
                cout << "Valor: R$ " << quantidade*3.35 << endl;
                break;
            case 101:
                cout << "Lanche adquirido: QUEIJUNTO\n";
                valor+=(quantidade*2.10);
                cout << "Valor: R$ " << quantidade*2.10 << endl;
                break;
            case 102:
                cout << "Lanche adquirido: PÃO COM OVO\n";
                valor+=(quantidade*1.50);
                cout << "Valor: R$ " << quantidade*1.50 << endl;
                break;
            case 103:
                cout << "Lanche adquirido: HAMBÚRGER\n";
                valor+=(quantidade*4.78);
                cout << "Valor: R$ " << quantidade*4.78 << endl;
                break;
            case 104:
                cout << "Lanche adquirido: CHEESEBURGUER\n";
                valor+=(quantidade*5.31);
                cout << "Valor: R$ " << quantidade*5.31 << endl;
                break;
            case 105:
                cout << "Lanche adquirido: REFRIGERANTE\n";
                valor+=(quantidade*3.75);
                cout << "Valor: R$ " << quantidade*3.75 << endl;
                break;
            default: "Código invalido.\nNenhum lanche foi adquirido.\n\n";
        }
        cout << "Se desejar sair digite \"SAIR\" caso contrario digite qualquer outra coisa\n";
        cout << "Digite aqui: ";
        cin >> sair;
        system("cls");
    } while (sair != "SAIR" || sair != "sair");
    cout << "------- L A N C H O N E T E -------\n";
    if(valor == 0)
        cout << "Nenhum pedido foi realizado.\n";
    else
        cout << "Valor total a pagar: R$ " << valor << endl;
    return 0;
}
