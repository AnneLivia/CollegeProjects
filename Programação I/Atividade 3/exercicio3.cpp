#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;


int main() {

    setlocale(LC_ALL,"Portuguese");
    int qtdAlunos, i = 0;
    float nota, mediaArit = 0.0;
    cout << "Quantos alunos sua turma possui? ";
    cin >> qtdAlunos;
    while(i++ < qtdAlunos) {
        cout << "Digite a nota do " << i <<  " aluno: ";
        cin >> nota;
        mediaArit+=nota;
    }
    mediaArit/=qtdAlunos;

    cout << "Média aritmética: " << mediaArit << endl;

    return 0;
}
