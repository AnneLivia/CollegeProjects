#include <iostream>

/*
       Passagem por referencia em c++ significa, que eu estou passando a varivel propiamente dita para a função, porém com
       outro nome.
       exemplo;
       void func(int &x)
       {
         x++;
       }

       int main{ int a = 2; func(a); cout << a << endl; return 0; }

       dessa maneira o parametro x, dentro da função é na verdade a variavel a, porém com o nome x.
       int a = 10;
       int &b = a;
       b = 2;

       b é a propria variavel a, porém com outro nome.
*/

using namespace std;
class Conta{
   public:
       double saldo;
       int numero;

       double depositar(double quantidade)
       {
           if(quantidade > 0)
           {
                this->saldo += quantidade;
           }
           return this->saldo;
       }

       double sacar(double quantidade)
       {
           if(this->saldo >= quantidade && quantidade > 0)
           {
               this->saldo -= quantidade;
           }
           return this->saldo;
       }

       double getSaldo()
       {
           return this->saldo;
       }
};

void depositar(Conta &c)
{
    c.depositar(50);
}

int main()
{

    Conta c;
    Conta *pConta = &c;
    c.saldo = 100;
    c.depositar(100);
    c.numero = 1;

    depositar(c);
    cout << c.getSaldo() << endl;
    return 0;
}
/*
#include <iostream>
 using namespace std;
 int main()
 {
    int val1 = 10;
    int val2 = 20;
    int &ref = val1;
    cout << "val1 is " << val1 << endl;
    cout << "val2 is " << val2 << endl;
    cout << "ref is " << ref << endl;
    ref = val2;    //What does this do?
    cout << endl << "ref = val2" << endl;
    cout << "val1 is " << val1 << endl;
    cout << "val2 is " << val2 << endl;
    cout << "ref is " << ref << endl;
    val2 = 30;
    cout << endl << "Setting val2 = 30" << endl;
    cout << "val1 is " << val1 << endl;
    cout << "val2 is " << val2 << endl;
    cout << "ref is " << ref << endl;
    system ("pause");
    return 0;
 }
*/
