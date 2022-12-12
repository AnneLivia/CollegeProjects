#include <iostream>
#include <stdlib.h>
// Sobrecarga do operador de indice, [ ]
using namespace std;

class Vetor{
private:
    int *vet;
    int MAX;
public:
    Vetor(int MAX = 100)
    {
        if(MAX < 0) {
            cerr << "Error: number less than 0" << endl;
            exit(1);
        } else if (MAX > 1000000) {
            cerr << "Error: number bigger than 1.000.000" << endl;
            exit(1);
        }
        this->MAX = MAX;
        this->vet = new int[MAX];
    }
    int& operator[]  (int i) // overloading the [] operator by passing the i which is the index and return an int by reference, int& is going to be the exactly vet[i]
    {
       return this->vet[i];
    }
    bool insertValue(int pos, int num)
    {
        if(pos < MAX && pos >= 0 )
        {
            this->vet[pos] = num;
            return true;
        }
        return false;
    }

    ~Vetor()
    {
        delete [] vet;
    }

};
int main()
{
    Vetor v(10);
    if(v.insertValue(0,20)){
        cout << "The number was inserted with success\n";
    } else {
        cerr << "Error: position that was informed is wrong.\n";
    }

    if(v.insertValue(1,21)){
        cout << "The number was inserted with success\n";
    } else {
        cerr << "Error: position that was informed is wrong.\n";
    }

    if(v.insertValue(20,80)){
        cout << "The number was inserted with success\n";
    } else {
        cerr << "Error: position that was informed is wrong.\n";
    }

    cout << "\n\nV[0]: " << v[0] << "\nV[1]: " << v[1] << "\nV[2]: " << v[2] << "\nV[3]: " << v[3] << endl;
    return 0;
}
