#include <iostream>
#include <vector>

using namespace std;
void impNum();
int num{12};

int soma(int n1, int n2) {
    return n1 + n2;
}
/* Defining a function that return a double */
auto multiplication(double n1, double n2) -> double {
    return n1 * n2;
}

string canal() {
    return "Telecine";
}

void somador() {
    static int i = 0;
    i++;
    cout << i << endl;
}
int main()
{
    // Auto - Define a variable that can be of any time, but it has to be initialized in the moment of the declaration
    // It must be initialized in the declaration
    auto x = 10; // It only allow integers to be inserted in the variable.
    auto name = "Livia";
    auto f = 1.233;
    auto res1 = soma(10,5);
    auto res2 = canal();
    vector <int> my{1,2,3,3,44};
    for ( auto it = my.begin(); it != my.end(); it++) {
        cout << *it << endl;
    }

    cout << res2 << endl;
    // Register - Asking for the system to store this variable in the registration, if it can.
    register int cont = 1;
    for(; cont < 5; cont++)
        cout << cont << endl;

    // Static - Modified access that sums up, the space in the memory is defined on the memory and still the same.
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    // Extern - usar uma variável que está declarada em outro arquivo, de forma externa ao arquivo onde vamos usar a variável.
    extern int valor;
    impNum();
    cout <<  valor << endl;
    return 0;
}
