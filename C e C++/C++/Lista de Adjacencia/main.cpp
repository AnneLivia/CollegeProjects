#include <iostream>
#include <algorithm>
#include <list>
#include <stack>

using namespace std;

class Graph{
private:
    int v;
    list <int> *adj;
public:
    Graph(int n) {
        v = n;
        adj = new list<int>[v]; // Vetor de listas
    }

    void adicionarAresta(int verticeA, int verticeB) {
        adj[verticeA].push_back(verticeB);
    }

    int obterGrauDeSaida(int vertice) {
        return adj[vertice].size();
    }

    void showingGraph()
    {
        for (int i = 0; i < this->v; i++)
        {
            list<int>::iterator it; // Criando um iterator para percorrer os elementos da lista
            cout << "v" << i;
            for (it = adj[i].begin(); it != adj[i].end(); it++)
            {
                cout << " -> " << "v" << *it;
            }
            cout << "\n";
        }

    }
    //DFS

    ~Graph(){
        delete[]adj;
    }
};
int main()
{
    Graph g(5);
    g.adicionarAresta(1,2);
    g.adicionarAresta(1,4);

    g.showingGraph();
    return 0;
}
