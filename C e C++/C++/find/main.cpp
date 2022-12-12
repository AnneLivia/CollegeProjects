#include <iostream>
#include <algorithm> // To use the find method
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    /*
        O algoritmo find encontra um determinado elemento
        dentro de uma cole��o como array, vector, list, etc.
        Vamos aprender tamb�m sobre o m�todo find das classes map e string.
    */

    int vetor[] = {4,3,2,1,2,3,4,4};
    int *p;
    // size_t armazenar tamanho de elementos
    size_t tam = sizeof vetor/sizeof(int); // Divido por 4 pois � int
    p = find(vetor,vetor+tam,3);
    if(p != vetor+tam) // Se p � diferente do fim do vetor, � porque ele percorreu todo o vetor e n�o encontrou o valor
        cout << "Numeral encontrado: " << *p << endl;
    else // Caso contrario, ele encontrou.
        cout << "Numero nao encontrado!\n";


    vector<int> num={1,2,3,4,5,6,7};
    auto it = find(num.begin(),num.end(),7);
    if(it != num.end()) // Se p � diferente do fim do vetor, � porque ele percorreu todo o vetor e n�o encontrou o valor
        cout << "Numeral encontrado: " << *it << endl;
    else // Caso contrario, ele encontrou.
        cout << "Numero nao encontrado!\n";


    vector<int> numeros;
    vector<int>::iterator it2;

    int n, qtd = 10;

    while(qtd > 0) {
        cout << "Digite um numeral: " << endl;
        cin >> n;
        it2=find(numeros.begin(),numeros.end(),n);
        if(it2 != numeros.end())
            cout << "Numeral ja existe\n";
        else {
            numeros.push_back(n);
            qtd--;
        }
    }

    map<char,int>mapa;
    mapa['a'] = 10;
    mapa['b'] = 33;
    mapa['c'] = 25;
    mapa['d'] = 5;
    mapa['e'] = 80;

    auto itMap = mapa.find('c'); // S� o elemento que quiser pesquisar
    if(itMap != mapa.end())
        cout << "Chave encontrada: " << itMap->second << endl;
    else
        cout << "N�o foi encontrado\n";


    string texto = "Curso aula de c++\n";
    size_t enc = texto.find("aula");// Armazena tamanhos.

    if(enc != string::npos) { // Npos retorna o valor maximo do size_t
        cout << "Palavra encontrada: " << enc << endl;
    }else
        cout << "Palavra nao encontrada" << endl;

    size_t tams = text.size();
    size_t tamv = num.size(); // Tipo proprio para armazenar tamanho dos elementos.

    return 0;
}
