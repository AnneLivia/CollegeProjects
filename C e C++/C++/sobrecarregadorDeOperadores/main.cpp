#include <iostream>

using namespace std;

class complexo{
public:
    int real, imag;

    complexo(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    complexo operator+(complexo& c){
        return complexo(this->real + c.real, this->imag + c.imag);
    }
};
int main()
{
    complexo c1(1,2), c2(3,4);
    //complexo c3 = c1 + c2;
    complexo c3 = c1.operator+(c2); // This gonna be the same as the coding above check bellow

    cout << "Parte real: " << c3.real << endl;
    cout << "Parte imaginaria: " << c3.imag << endl;
    return 0;
}
