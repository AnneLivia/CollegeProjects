#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float mediaIdade = 0;
    int idade, peso, qtdMais65k = 0;

    for ( int i = 0; i < 10; i++) {
        cout << "Digite a idade " << i + 1 << ": ";
        cin >> idade;
        cout << "Digite o peso " << i + 1 << ": ";
        cin >> peso;
        system("cls");
        mediaIdade+=idade;
        if(peso > 65)
            qtdMais65k++;
    }

    mediaIdade = mediaIdade / 10;

    cout << "Quantidade de pessoas com mais de 65 quilos: " << qtdMais65k << endl;
    cout << "Media das idades das 10 pessoas: " << mediaIdade << endl;

    return 0;
}
