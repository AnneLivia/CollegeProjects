#include <iostream>

using namespace std;

class Conta{
  public:
      int numero;
      double saldo;

      double depositar(double quantidade)
      {
          if(quantidade > 0)
            this->saldo+=quantidade;
          return this->saldo;
      }

      double retirar(double quantidade)
      {
          if(quantidade > 0 && this->saldo > quantidade)
            this->saldo-=quantidade;
          return this->saldo;
      }

};
int main()
{
    Conta n1;
    Conta *pN1 = &n1;
    (*pN1).numero = 1;
    (*pN1).saldo = 100.75;

    cout << "Numero da conta: " << pN1->numero << endl;
    cout << "Saldo da conta: " << pN1->saldo << endl;
    cout << "Saldo depois do deposito: " << pN1->depositar(100) << endl;
    cout << "Saldo depois do saque: " << pN1->retirar(10.75) << endl;

    return 0;
}
