#include <iostream>
#include <cstdlib>
#include <clocale>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float matriz[10][3];
    float media, somaMedia = 0;

    for ( int i = 0; i < 10; i++) {
        cout << "Entre com a matricula, nota da 1ª avaliação e nota da 2ª avaliação: \n";
        cout << "Digite a matricula: ";
        cin >> matriz[i][0];
        cout << "Digite a nota da 1ª avaliação: ";
        cin >> matriz[i][1];
        cout << "Digite a nota da 2ª avaliação: ";
        cin >> matriz[i][2];
        system("cls");
    }

    cout << "    Mat. - 1ª Ava. - 2ª Ava - Média - Situação\n";

    for ( int i = 0; i < 10; i++) {
        for ( int j = 0; j < 3; j++) {
            cout << setw(8) << matriz[i][j] << " ";
        }
        media = (matriz[i][1] + matriz[i][2]) / 2;
        cout << setw(6) << media;
        somaMedia+=media;
        if(media >= 8)
            cout << "     Aprovado\n";
        else
            cout << "     Reprovado\n";
    }

    somaMedia/=10;
    cout << "\n\n      Media aritmetica das notas finais: " << somaMedia << endl;



    return 0;
}
