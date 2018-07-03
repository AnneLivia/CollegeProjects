#include <iostream>
#include <cmath>
#include <iomanip>

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

    for ( int i = 0; i < tam - 1; i++) {
        for ( int j = 0; j < tam - 1; j++) {
            cout << matAux[i][j] << " ";
        }
        cout << endl;
    }


    return determinanteOrdem3(matAux,tam - 1);
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

void matrizSubstituida(int vet[][100], int tam, int coeficientes[], int matAux[][100], int c) {
    if(c == 1) {
        for ( int i = 0; i < tam; i++) {
            for ( int j = 0; j < tam; j++) {
                if(i == 0)
                    matAux[j][i] = coeficientes[j];
                else
                    matAux[j][i] = vet[j][i];
            }
        }
    } else if (c == 2) {
        for ( int i = 0; i < tam; i++) {
            for ( int j = 0; j < tam; j++) {
                if(i == 1)
                    matAux[j][i] = coeficientes[j];
                else
                    matAux[j][i] = vet[j][i];
            }
        }
    } else if (c == 3) {
        for ( int i = 0; i < tam; i++) {
            for ( int j = 0; j < tam; j++) {
                if(i == 2)
                    matAux[j][i] = coeficientes[j];
                else
                    matAux[j][i] = vet[j][i];
            }
        }
    }
}

void resolverSistemaCramer(int vet[][100], int tam, int coeficientes[], int *x, int *y, int *z, int det) {

    int matAux[tam][100];

    if(tam == 2) {
        matrizSubstituida(vet,tam,coeficientes,matAux,1);
        *x = determinanteOrdem2(matAux,tam);
        matrizSubstituida(vet,tam,coeficientes,matAux,2);
        *y = determinanteOrdem2(matAux,tam);
        *x/=det;
        *y/=det;
    } else if (tam == 3) {
        matrizSubstituida(vet,tam,coeficientes,matAux,1);
        *x = determinanteOrdem3(matAux,tam);
        matrizSubstituida(vet,tam,coeficientes,matAux,2);
        *y = determinanteOrdem3(matAux,tam);
        matrizSubstituida(vet,tam,coeficientes,matAux,3);
        *z = determinanteOrdem3(matAux,tam);
        *x/=det;
        *y/=det;
        *z/=det;
    }
}

int main()
{
    int ordem, matriz[100][100], coeficientes[100], d, x, y, z;
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

    system("cls");

    cout << "-------------------------     M A T R I Z   -----------------------\n\n";
    for ( int i = 0; i < ordem; i++) {
        cout << "                       ";
        for ( int j = 0; j < ordem; j++) {
            cout << setw(6) << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    char c = 'x';
    for ( int i = 0; i < ordem; i++) {
        cout << " | ";
        for ( int j = 0; j < ordem; j++) {
            if(matriz[i][j] >= 0 && j != 0)
                cout << "+";
            cout << matriz[i][j] << c++;
        }
        cout << " = " << coeficientes[i] << endl;
        c = 'x';
    }

    cout << endl;

    if(ordem == 2) {
        d = determinanteOrdem2(matriz,ordem);
    } else if (ordem == 3) {
        d = determinanteOrdem3(matriz,ordem);
    } else if (ordem > 3) {
        d = determinanteLaplace(matriz,ordem);
    }
    cout << " Determinante: " << d << endl;

    resolverSistemaCramer(matriz, ordem, coeficientes, &x, &y, &z, d);
    if(d != 0) {
        cout << " SPD - Sistema Possivel e Determinado\n";
        if(ordem == 2)
            cout << " X = " << x << "\n Y = " << y << endl;
        else if (ordem == 3)
            cout << " X = " << x << "\n Y = " << y << "\n Z = " << z << endl;
        else
            cout << " X = " << x << "\n Y = " << y << endl;

    } else {
        if(x == 0 && y == 0)
            cout << "SI - Sistema Impossivel\n";
        else
            cout << "SPI - Sistema Impossivel Indeterminando\n";
    }
    return 0;
}
