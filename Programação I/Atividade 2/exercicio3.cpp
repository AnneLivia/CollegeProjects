#include <iostream>

using namespace std;

int main()
{
    int idade, qtd = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Digite a idade " << i << ": ";
        cin >> idade;
        if(idade >= 18)
            qtd++;
    }

    if(qtd == 0)
        cout << "Nenhuma pessoa tem idade maior ou igual a 18\n";
    else if(qtd == 1)
        cout << "Uma pessoa tem idade maior ou igual a 18\n";
    else
        cout << qtd << " pessoas tem idade maior ou igual a 18\n";
    return 0;
}
