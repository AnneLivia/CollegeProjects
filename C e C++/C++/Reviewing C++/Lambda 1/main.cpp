#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


void abssort(int *vet, unsigned n) {
    sort(vet, vet + n, [](int x , int y) {return abs(x) < abs(y);});
}

int main()
{
    int vet[] = {2,4,5,6,6,6,12,3223,545,2};
    for (int i : vet) {
        cout << i << " ";
    }
    cout << endl;
    abssort(vet, sizeof(vet)/sizeof(vet[0]));
    for (int i : vet) {
        cout << i << " ";
    }
    cout << endl;


    int m = 0;
    int n = 0;

    [&, n] (int a) mutable {
        m = ++n + a; // Erro, porque n é constante dessa forma sem o mutable key word.
    }(4);

    cout << m << " " << n << endl;
    return 0;
}
