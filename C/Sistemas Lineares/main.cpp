#include <iostream>
#include <cmath>

using namespace std;

int determinanteOrdem2(int matriz[][100], int tam) {
    int d = 1, aux;
    int matAux[100][100];
    for ( int i = 0; i < tam; i++) {
        d*=matriz[i][i];
    }
    aux = d;
    d = 1;
    int j = tam - 1;
    for ( int i = 0; i < tam; i++) {
        d*=matriz[i][j--];
    }
    return (aux - d);
}

int determinanteOrdem3(int matriz[][100], int tam) {
    int d = 1, p1, p2, p3, c;
    int matAux[100][100];

    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            matAux[i][j] = matriz[i][j];
        }
    }

    c = tam; // Para começar da coluna sem valor em diante
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam - 1; j++) {
            matAux[i][c++] = matriz[i][j];
        }
        c = tam;
    }

    p1 = p2 = p3 = 1;
    for ( int i = 0; i < tam; i++) {
        p1*=matAux[i][i];
        p2*=matAux[i][i + 1];
        p3*=matAux[i][i + 2];
    }
    d = p1 + p2 + p3;
    int j = 0;
    p1 = p2 = p3 = 1;
    for ( int i = tam - 1; i >= 0; i--) {
        p1*=matAux[i][j];
        p2*=matAux[i][j + 1];
        p3*=matAux[i][j + 2];
        j++;
    }
    d = d - (p1 + p2 + p3);
    return d;
}

int fixMat(int matriz[][100], int tam, int l, int c){
    int matAux[100][100];
    int p = 0, q = 0;
    for ( int i = 0; i < tam; i++) {
        for ( int j = 0; j < tam; j++) {
            if(i != l && j != c) {
                matAux[p][q++] = matriz[i][j];
            }
        }
        if(q == (tam - 1)) {
            q = 0;
            p++;
        }
    }

    if(tam - 1 != 3) {
        cout << "Here Again\n";
        fixMat(matAux,tam - 1,0,0);
    } else {
        return determinanteOrdem3(matAux,tam - 1);
    }
}

int determinanteLaplace(int matriz[][100], int tam) {
    int d = 1, sum = 0, tAux = tam;
    int c = 0, l = 0;
    if(tam >= 5)
        tAux = 1;
    for ( int i = 0; i < 1; i++) {
        for ( int j = 0; j < tAux; j++) {
            sum+=matriz[i][j]*pow(-1.0,i+2+j)*fixMat(matriz,tam,i,j);
        }
    }

    return sum;
}

int main()
{
    int ordem, matriz[100][100], coeficientes[100], d;
    cout << "Matriz Quadrada de ordem: ";
    cin >> ordem;

    cout << "Insira os valores da Matriz de ordem " << ordem << ": " << endl;

    for ( int i = 0; i < ordem; i++) {
        for ( int j = 0; j < ordem; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "Insira os tempos independentes: " << endl;
    for ( int i = 0; i < ordem; i++) {
        cin >> coeficientes[i];
    }

    if(ordem == 2) {
        d = determinanteOrdem2(matriz,ordem);
    } else if (ordem == 3) {
        d = determinanteOrdem3(matriz,ordem);
    } else if (ordem > 3) {
        d = determinanteLaplace(matriz,ordem);
    }
    cout << d << endl;
    if(d != 0)
        cout << "SPD - Sistema Possivel e Determinado\n";
    else {

    }
    return 0;
}
