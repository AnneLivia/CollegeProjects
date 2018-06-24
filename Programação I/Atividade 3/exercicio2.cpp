#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

// Fun��o usada para verificar se todos os gasto j� foram fornecidos, caso j� tenha sido ser� retornado true
bool tudoPrenchido(int tam, int vet[]) {
    int qtd = 0;
    for ( int i = 0; i < tam; i++) {
        if(vet[i]) // Se for true ou igual a 1
            qtd++; // incrementar para contabilizar a quantidade de gastos que j� foram fornecidos
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
    cout << "Digite o seu sal�rio: ";
    cin >> salario;
    system("cls");
    do {
        cout << "------- G A S T O S -------\n";
        cout << "1 - Alimenta��o\n";
        cout << "2 - Transporte\n";
        cout << "3 - Internet\n";
        cout << "4 - Energia\n";
        cout << "5 - �gua\n";
        cout << "6 - Gasolina\n";
        cout << "7 - Cerveja\n";
        cout << "8 - Churrasco\n";
        cout << "Para sair digite \"SAIR\".\n";
        cout << "Digite aqui: ";
        cin >> opcao;

        if(opcao == "SAIR" || opcao == "sair") // O c�digo ir� se repetir at� que todos os gastos tenha sido fornecidos ou que o usuario digite sair
            break;

        codigo = stoi(opcao); // Convertendo String para Inteiro.
        cout << "Digite o gasto com ";
        switch(codigo) {
            case 1:
                cout << "Alimenta��o: ";
                allGastos[codigo -  1] = 1; // Atribuindo 1 para informar que j� foi inserido os gastos com alimenta��o
                break;
            case 2:
                cout << "Transporte: ";
                allGastos[codigo -  1] = 1; // mesmo que acima, s� que agora com Transporte
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
                cout << "�gua: ";
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
    } while (!tudoPrenchido(8,allGastos)); // O loop ir� se repetir at� que todos os gastos tenha sido fornecido

    if(tudoPrenchido(8,allGastos))
        cout << "Todos os gastos foram fornecidos";
    cout << "\n\n";
    cout << "S�lario: R$" << salario << endl;
    if(despesas == 0)
        cout << "N�o houve gastos.\n";
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
