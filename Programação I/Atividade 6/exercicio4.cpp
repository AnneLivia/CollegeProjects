#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    int candidatos[4] = {0,0,0,0}, votoNulo, votoBranco, opcao;
    float totalVotos;
    votoBranco = votoNulo = totalVotos = 0;

    do {
      system("cls");
      cout << " -------------------- E L E I C A O --------------------\n\n";
      cout << "1 - Candidato 1\n";
      cout << "2 - Candidato 2\n";
      cout << "3 - Candidato 3\n";
      cout << "4 - Candidato 4\n";
      cout << "5 - Voto Nulo\n";
      cout << "6 - Voto Branco\n";
      cout << "0 - Para finalizar o programa\n";
      cout << "Digite aqui: ";
      cin >> opcao;
      switch(opcao) {
        case 1:
            cout << "Voto computado para o candidato 1\n";
            candidatos[0]+=1;
            totalVotos+=1;
            break;
        case 2:
            cout << "Voto computado para o candidato 2\n";
            candidatos[1]+=1;
            totalVotos+=1;
            break;
        case 3:
            cout << "Voto computado para o candidato 3\n";
            candidatos[2]+=1;
            totalVotos+=1;
            break;
        case 4:
            cout << "Voto computado para o candidato 4\n";
            candidatos[3]+=1;
            totalVotos+=1;
            break;
        case 5:
            cout << "Voto Nulo\n";
            votoNulo+=1;
            totalVotos+=1;
            break;
        case 6:
            cout << "Voto Branco\n";
            votoBranco+=1;
            totalVotos+=1;
            break;
        case 0:
            cout << "Programa finalizando...\n";
            break;
        default:
            cout << "Opcao invalida\n";
      }
      system("pause");
    } while (opcao != 0);

    system("cls");

    cout << " -------------------- E L E I C A O --------------------\n\n";

    cout << "Total de votos: " << totalVotos << endl;
    cout << "Candidato 1: " << candidatos[0] << endl;
    cout << "Candidato 2: " << candidatos[1] << endl;
    cout << "Candidato 3: " << candidatos[2] << endl;
    cout << "Candidato 4: " << candidatos[3] << endl;
    cout << "Votos Nulos: " << votoNulo << endl;
    cout << "Votos Brancos: " << votoBranco << endl;
    cout << "Porcentagem de votos nulos sobre o total: " << (votoNulo / totalVotos) * 100 << " %" << endl;
    cout << "Porcentagem de votos brancos sobre o total: " << (votoBranco / totalVotos) * 100 << " %" << endl;

    return 0;
}



