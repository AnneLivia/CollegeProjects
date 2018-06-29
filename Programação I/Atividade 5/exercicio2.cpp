#include <iostream>
#include <cstdlib>
#include <clocale>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int tipoCombustivel;
    string nomeCombustivel;
    float valor = 0, qtdLitros, valorComDesconto, desconto = 0;

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
        nomeCombustivel = "Gasolina Comum";
        valor = qtdLitros * 4.30;
        if(qtdLitros >= 10 && qtdLitros <= 20) {
            desconto = valor*0.02;
        } else if (qtdLitros > 20) {
            desconto = valor*0.05;
        }
        valorComDesconto = valor - desconto;
        break;
    case 2:
        nomeCombustivel = "Gasolina Aditivada";
        valor = qtdLitros * 4.70;
        if(qtdLitros >= 10 && qtdLitros <= 20) {
            desconto = valor*0.03;
        } else if (qtdLitros > 20)
            desconto = valor*0.06;
        valorComDesconto = valor - desconto;
        break;
    case 3:
        nomeCombustivel = "Etanol";
        valor = qtdLitros * 3.79;
        if(qtdLitros >= 10 && qtdLitros <= 20) {
            desconto = valor*0.04;
        } else if (qtdLitros > 20)
            desconto = valor*0.07;
        valorComDesconto = valor - desconto;
        break;
    }

    system("cls");

    // Essas duas linhas de códigos servem para deixar um valor com somente dois números após o ponto

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "----------- P O S T O ------------\n";
    cout << "\nCombustível comprado: " << nomeCombustivel << endl;
    cout << "\nValor total: R$ " << valor << endl;
    if(valorComDesconto != valor) {
        cout << "Desconto: R$ " << desconto << endl;
        cout << "Valor com desconto: R$ " << valorComDesconto << endl;
    } else
        cout << "Não houve desconto\n";
    return 0;
}
