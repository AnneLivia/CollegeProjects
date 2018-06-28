#include <iostream>
#include <cstdlib>
#include <clocale>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int tipoCombustivel;
    float valor = 0, qtdLitros;

    cout << "----------- P O S T O ------------\n\n";
    cout << "1 - Gasolina Comum: R$ 4.30\n";
    cout << "2 - Gasolina Aditivada: R$ 4.70\n";
    cout << "3 - Etanol: R$ 3.79\n\n";
    cout << "Digite o número referente ao combustivel que queira comprar: ";
    cin >> tipoCombustivel;
    cout << "Digite a quantidade de litros: ";
    cin >> qtdLitros;


    switch(tipoCombustivel) {
    case 1 :
        cout << "Gasolina Comum\n";
        valor = qtdLitros * 4.30;
        if(qtdLitros >= 10 && qtdLitros <= 20) {
            valor -= (valor*0.02);
        } else if (qtdLitros > 20)
            valor -= (valor*0.05);

        break;
    case 2:
        cout << "Gasolina Aditivada\n";
        valor = qtdLitros * 4.70;
        if(qtdLitros >= 10 && qtdLitros <= 20) {
            valor -= (valor*0.03);
        } else if (qtdLitros > 20)
            valor -= (valor*0.06);
        break;
    case 3:
        cout << "Etanol\n";
        valor = qtdLitros * 3.79;
        if(qtdLitros >= 10 && qtdLitros <= 20) {
            valor -= (valor*0.04);
        } else if (qtdLitros > 20)
            valor -= (valor*0.07);
        break;
    }

    system("cls");
    cout << "----------- P O S T O ------------\n";
    cout << "\nValor a pagar: R$ " << valor << endl;
    return 0;
}
