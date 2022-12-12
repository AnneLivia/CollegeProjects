#include <iostream>
#include <vector>
#include <map>

using namespace std;
/* Padronizar o modo de inicializa��o de vari�veis, etc. */

struct pessoa {
    string nome;
    int idade;
};

class Veiculo {
public:
    int tipo;
    string nome;
};

int main()
{
    int num = 10; // Past standard
    int n1{11}; // Another initialization. for c++ 11;
    string name{"annelivia"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"Bel�m","Par�"},{"Minas Gerais","Belo Horizonte"}};

    pessoa p1{"Livia",21};
    cout << p1.nome << endl;
    cout << p1.idade << endl;
    pessoa p2{"Anne",21};
    Veiculo v1{1,"Chevrolet"};

    return 0;
}
