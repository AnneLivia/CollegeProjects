#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> pilha;

    pilha.push(1);
    pilha.push(2);

    cout << "Element from top: " << pilha.top() << endl;
    if(pilha.empty())
    {
        cout << "Is empty\n";
    } else {
        cout << "Is not empty\n";
    }
    return 0;
}
