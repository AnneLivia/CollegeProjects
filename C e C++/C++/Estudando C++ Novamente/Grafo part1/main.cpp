#include <iostream>
/*Matriz de adjac�ncia*/

using namespace std;

/*Cada linha do vetor � representado como um vertice... ser� verificado se determinado vertice tem liga��o com outro*/
int grafo[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,0,1,1},
        {0,0,1,0,1},
        {0,0,1,1,0}
};

bool temLigacao(int id1, int id2)
{
    if(grafo[id1][id2])
        return true;
    return false;
}

int main()
{
    cout << "B tem ligacao com o E ? \n" << temLigacao(0,2) << endl;
    return 0;
}
