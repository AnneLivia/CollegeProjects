#include <iostream>
#include <string.h>

using namespace std;

class ComplexNumber
{
private:
    int real, imag;
    char *name;
public:
    ComplexNumber(int, int);
    ComplexNumber();
    ComplexNumber(ComplexNumber &c);
  //  ComplexNumber operator+(ComplexNumber &c);
    ~ComplexNumber();
    void setName(const char* name);
    const char* getName();
    void changeFirstLetter(char c);
    int getImag();
    int getReal();
    void setImag(int imag);
    void setReal(int real);
};

ComplexNumber::ComplexNumber(int r, int i):real(r),imag(i){}
ComplexNumber::ComplexNumber(){this->real = 0; this->imag = 0;}
ComplexNumber::ComplexNumber(ComplexNumber &c)
{
    int length = strlen(c.getName()) + 1;
    this->name = new char[length];
    strcpy(this->name,c.getName());
    this->imag = c.imag;
    this->real = c.getReal();
}
/*ComplexNumber ComplexNumber::operator+(ComplexNumber &c)
{return ComplexNumber(this->real + c.real, this->imag + c.imag);}
*/
ComplexNumber::~ComplexNumber(){delete[] name; name = NULL;}


void ComplexNumber::setName(const char *name)
{
    int length = strlen(name);
    this->name = new char[length + 1];
    strcpy(this->name,name);
}

const char* ComplexNumber::getName(){return this->name;}
void ComplexNumber::changeFirstLetter(char c){this->name[0] = c;}
int ComplexNumber::getImag(){return this->imag;}
int ComplexNumber::getReal(){return this->real;}
void ComplexNumber::setImag(int imag){this->imag = imag;}
void ComplexNumber::setReal(int real){this->real = real;}

int main()
{
    ComplexNumber n1(2,5), n2(6,2);
    //n3 = n1.operator+(n2);
    n1.setName("Livia");
    n2.setName("Anne");
    ComplexNumber n3(n1);
    n3.changeFirstLetter('K');

    cout << "Name n1: " << n1.getName() << endl;
    cout << "N1 real: " << n1.getReal() << " N1 imag: " << n1.getImag() << endl << endl;

    cout << "Name n3: " << n3.getName() << endl;
    cout << "N3 real: " << n3.getReal() << " N3 imag: " << n3.getImag() << endl;



    return 0;
}
