#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int opcao, controle = 0;
    while(opcao != 5) {
        cout << "Digite um valor de 1 a 4. Digite 5 para sair.\n";
        cin >> opcao;
        if((opcao < 1) || (opcao > 5))
            continue;
        controle++; // conta quantas entradas validas existem
        cout << "controle: " << controle << endl;
        switch(opcao) {
        case 1 :
            cout << "Voc� escolheu a op��o 1\n\n";
            break;
        case 2 :
            cout << "Voc� escolheu a op��o 2\n\n";
            break;
        case 3 :
            cout << "Voc� escolheu a op��o 3\n\n";
            break;
        case 5 :
            cout << "Voc� escolheu sair do programa\n\n";
            break;
        }
    }


    return 0;
}
