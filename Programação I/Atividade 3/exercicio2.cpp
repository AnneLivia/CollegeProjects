#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

// Função usada para verificar se todos os gasto já foram fornecidos, caso já tenha sido será retornado true
bool tudoPrenchido(int tam, int vet[]) {
    int qtd = 0;
    for ( int i = 0; i < tam; i++) {
        if(vet[i]) // Se for true ou igual a 1
            qtd++; // incrementar para contabilizar a quantidade de gastos que já foram fornecidos
    }
    if(qtd == tam)
        return true;
    return false;
}

int main() {

    setlocale(LC_ALL,"Portuguese");
    string opcao;
    int codigo, allGastos[8] = {}; // Inicializando o vetor com 0's
    float salario, despesas = 0.0, valor;
    cout << "Digite o seu salário: ";
    cin >> salario;
    system("cls");
    do {
        cout << "------- G A S T O S -------\n";
        cout << "1 - Alimentação\n";
        cout << "2 - Transporte\n";
        cout << "3 - Internet\n";
        cout << "4 - Energia\n";
        cout << "5 - Água\n";
        cout << "6 - Gasolina\n";
        cout << "7 - Cerveja\n";
        cout << "8 - Churrasco\n";
        cout << "Para sair digite \"SAIR\".\n";
        cout << "Digite aqui: ";
        cin >> opcao;

        if(opcao == "SAIR" || opcao == "sair") // O código irá se repetir até que todos os gastos tenha sido fornecidos ou que o usuario digite sair
            break;

        codigo = stoi(opcao); // Convertendo String para Inteiro.
        cout << "Digite o gasto com ";
        switch(codigo) {
            case 1:
                cout << "Alimentação: ";
                allGastos[codigo -  1] = 1; // Atribuindo 1 para informar que já foi inserido os gastos com alimentação
                break;
            case 2:
                cout << "Transporte: ";
                allGastos[codigo -  1] = 1; // mesmo que acima, só que agora com Transporte
                break;
            case 3:
                cout << "Internet: ";
                allGastos[codigo -  1] = 1;
                break;
            case 4:
                cout << "Energia: ";
                allGastos[codigo -  1] = 1;
                break;
            case 5:
                cout << "Água: ";
                allGastos[codigo -  1] = 1;
                break;
            case 6:
                cout << "Gasolina: ";
                allGastos[codigo -  1] = 1;
                break;
            case 7:
                cout << "Cerveja: ";
                allGastos[codigo -  1] = 1;
                break;
            case 8:
                allGastos[codigo -  1] = 1;
                cout << "Churrasco: ";
                break;
        }
        cin >> valor;
        despesas+=valor;
        system("cls");
    } while (!tudoPrenchido(8,allGastos)); // O loop irá se repetir até que todos os gastos tenha sido fornecido

    if(tudoPrenchido(8,allGastos))
        cout << "Todos os gastos foram fornecidos";
    cout << "\n\n";
    cout << "Sálario: R$" << salario << endl;
    if(despesas == 0)
        cout << "Não houve gastos.\n";
    else {
        cout << "Despesa total: R$ " << despesas << endl;
        float sobra = salario - despesas;
        if(sobra >= 0)
            cout << "Dinheiro que sobra: R$ " << sobra << endl;
        else
            cout << "No Vermelho\n";
    }
    return 0;
}
