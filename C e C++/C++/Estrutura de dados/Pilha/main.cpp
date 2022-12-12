#include <iostream>
#include <stack> // Precisa incluir essa biblioteca ou classe
using namespace std;
// Pilha/Stack
int main()
{
    stack <string> familia; // Declaração de pilha
    // Push = inseri
    familia.push("x");
    familia.push("y");
    familia.push("z");
    familia.push("w");

    if(familia.empty())
    {
        cout << "pilha vazia\n";
    }
    else{
        cout << "pilha com elementos\n\n";
    }
    cout << "Quantidade de pessoas na familia: " << familia.size() << "\n"; // Size() = tamanho;
    cout << "Pessoa no topo: " << familia.top() << endl; // top() = elemento do topo
    familia.pop(); // Pop = tirar o elemento do topo
    cout << "Pessoa no topo: " << familia.top() << endl;
    familia.pop();
    cout << "Quantidade de pessoas na familia: " << familia.size() << endl;
    cout << "Pessoa no topo: " << familia.top() << endl;

    while(!familia.empty())
    {
        familia.pop();
    }

    cout << "Quantidade de elementos: " << familia.size() << "\n";
    if(familia.empty())
    {
        cout << "pilha vazia\n";
    }
    else{
        cout << "pilha com elementos\n\n";
    }
    return 0;
}
