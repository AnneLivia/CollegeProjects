#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int x1 = 10, x2 = 20, x3 = 30, x4 = 40;

    // Somar variaveis
    // = captura todas as variaveis do scopo
    auto soma = [=]() -> int {
        return x1 + x2 + x3 + x4;
    };

    cout << "Soma: " << soma() << endl;
    // []() -> retorno {}; Não é preciso especificar um nome
    // [] -> Captura de variaveis
    // () -> passagem de parametros
    // {} -> corpo da função

    // Função anonima que está associada a variável maior
    auto maior = [=](vector<int>n) -> int {
        int m = n[0];
        for(int i : n) {
            m = (m < i) ? i : m;
        }
        return m + soma();
    };

    cout << maior({1,2,3,4,5,6,7}) << endl;

    return 0;
}
