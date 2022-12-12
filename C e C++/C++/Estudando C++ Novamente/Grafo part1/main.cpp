#include <iostream>
/*Matriz de adjacência*/

using namespace std;

/*Cada linha do vetor é representado como um vertice... será verificado se determinado vertice tem ligação com outro*/
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
