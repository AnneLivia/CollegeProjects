#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade, idFaixa[5] = {0,0,0,0,0};

    for ( int i = 1; i <= 15; i++) {
        cout << "Digite a " << i << "º idade: ";
        cin >> idade;
        if(idade <= 15)
            idFaixa[0]++;
        else if (idade >= 16 && idade <= 30)
            idFaixa[1]++;
        else if (idade >= 31 && idade <= 45)
            idFaixa[2]++;
        else if (idade >= 46 && idade <= 60)
            idFaixa[3]++;
        else
            idFaixa[4]++;
    }

    cout << "\n\nQuantidade de pessoas por faixa etária: " << endl;
    for ( int i = 0; i < 5; i++) {
        cout << i + 1 << " º Faixa etária: " << idFaixa[i] << endl;
    }

    cout.precision(0);
    cout.setf(ios::fixed);
    cout << "Porcentagem de pessoas na 1ª faixa etária em relação ao total: " << (idFaixa[0]/ 15.0) * 100 << "%" << endl;
    cout << "Porcentagem de pessoas na 5ª faixa etária em relação ao total: " << (idFaixa[4]/ 15.0) * 100 << "%" << endl;

    return 0;
}
