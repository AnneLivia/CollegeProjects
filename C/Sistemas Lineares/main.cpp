#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

using namespace std;

/**
    Programa para solucionar um sistema linear NxN, sendo este de 2 a 4.
    Sendo utilizado 3 funções para calcular o determinante, um para matriz 2x2, outro para 3x3 utilizando o método de sarrus e
    outro para 4x4 utilizando laplace.
    para solucionar o sistema linear está sendo usado o método de cramer.

*/

// Declarações das funções utilizadas no programa
float determinanteOrdem2(float matriz[][5], int tam); // Função para calcular o determinante de matriz 2x2
float determinanteOrdem3(float matriz[][5], int tam); // Função para calcular o determinante de matriz 3x3
float fixMat(float matriz[][5], int tam, int l, int c); // Função para transformar a matriz 4x4 em 3x3 e retornar o determinante de matriz 3x3
float determinanteLaplace(float matriz[][5], int tam); // Função para calcular o determinante de matriz 4x4 utilizando laplace
void matrizSubstituida(float vet[][5], int tam, float coeficientes[], float matAux[][5], int c); // Função para substituir as respectivas colunas pelo valores independentes.
void resolverSistemaCramer(float vet[][5], int tam, float coeficientes[], float *x, float *y, float *z, float *w, float det); // resolver os sistemas linear utilizando o regra de crammer

int main()
{
    int ordem;
    float matriz[5][5], coeficientes[5], d, x, y, z, w;

    do {
        cout << "Matriz Quadrada de ordem: ";
        cin >> ordem;
        system("cls");
    } while(ordem < 2 || ordem > 4);
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
        cout << "                   ";
        if(ordem == 2)
            cout << "        ";
        else if (ordem == 3)
            cout << "    ";
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
            if(c == '{')
                c = 'w';
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

    resolverSistemaCramer(matriz, ordem, coeficientes, &x, &y, &z, &w, d);

    if(d != 0) { // Se o determinante for diferente de 0 é porque existe somente uma solução para o sistema
        cout << " SPD - Sistema Possivel e Determinado\n";
        if(ordem == 2)
            cout << " X = " << x << "\n Y = " << y << endl;
        else if (ordem == 3)
            cout << " X = " << x << "\n Y = " << y << "\n Z = " << z << endl;
        else if (ordem == 4)
            cout << " X = " << x << "\n Y = " << y << "\n Z = " << z << "\n W = " << w << endl;

    } else { // Se o determinante for diferente igual a 0 é porque ele pode ser ou SI ou SPI
        if((ordem == 2 && x != 0 || y != 0) ||
           (ordem == 3 && x != 0 || y != 0 || z != 0) ||
           (ordem == 4 && x != 0 || y != 0 || z != 0 || w != 0)) // Se pelo menos uma das icognitas forem diferente de 0, ele é um SI
            cout << " SI - Sistema Impossivel\n";
        else
            cout << " SPI - Sistema Possivel Indeterminando\n";
    }
    return 0;
}

// Implementações das funções

float determinanteOrdem2(float matriz[][5], int tam) {
    float d = 1, aux;
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

float determinanteOrdem3(float matriz[][5], int tam) {
    float d = 1, p1, p2, p3, matAux[5][5];
    int c;

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

float fixMat(float matriz[][5], int tam, int l, int c){
    float matAux[5][5];
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

    return determinanteOrdem3(matAux,tam - 1);
}

float determinanteLaplace(float matriz[][5], int tam) {
    int tAux = tam;
    float sum = 0;

    if(tam >= 5)
        tAux = 1;
    for ( int i = 0; i < 1; i++) {
        for ( int j = 0; j < tAux; j++) {
            sum+=matriz[i][j]*pow(-1.0,i+2+j)*fixMat(matriz,tam,i,j);
        }
    }

    return sum;
}

void matrizSubstituida(float vet[][5], int tam, float coeficientes[], float matAux[][5], int c) {
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
    } else if (c == 4) {
        for ( int i = 0; i < tam; i++) {
            for ( int j = 0; j < tam; j++) {
                if(i == 3)
                    matAux[j][i] = coeficientes[j];
                else
                    matAux[j][i] = vet[j][i];
            }
        }
    }
}

void resolverSistemaCramer(float vet[][5], int tam, float coeficientes[], float *x, float *y, float *z, float *w, float det) {

    float matAux[tam][5];

    if(tam == 2) {
        matrizSubstituida(vet,tam,coeficientes,matAux,1);
        *x = determinanteOrdem2(matAux,tam);
        matrizSubstituida(vet,tam,coeficientes,matAux,2);
        *y = determinanteOrdem2(matAux,tam);
        if(det != 0) {
            *x/=det;
            *y/=det;
        }
    } else if (tam == 3) {
        matrizSubstituida(vet,tam,coeficientes,matAux,1);
        *x = determinanteOrdem3(matAux,tam);
        matrizSubstituida(vet,tam,coeficientes,matAux,2);
        *y = determinanteOrdem3(matAux,tam);
        matrizSubstituida(vet,tam,coeficientes,matAux,3);
        *z = determinanteOrdem3(matAux,tam);
        if(det != 0) {
            *x/=det;
            *y/=det;
            *z/=det;
        }
    } else if (tam == 4) {
        matrizSubstituida(vet,tam,coeficientes,matAux,1);
        *x = determinanteLaplace(matAux,tam);

        matrizSubstituida(vet,tam,coeficientes,matAux,2);
        *y = determinanteLaplace(matAux,tam);

        matrizSubstituida(vet,tam,coeficientes,matAux,3);
        *z = determinanteLaplace(matAux,tam);

        matrizSubstituida(vet,tam,coeficientes,matAux,4);
        *w = determinanteLaplace(matAux,tam);

        if(det != 0) {
            *x/=det;
            *y/=det;
            *z/=det;
            *w/=det;
        }
    }
}
