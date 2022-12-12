#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
// Container that allow us to insert a pair of data

int main()
{
    // pair <int,string> par(10,"Anne"); // A par de dados
    pair <int,string> par[3];
    par[0].first = 100;
    par[0].second = "Livia";
    par[1].first = 123;
    par[1].second = "Anne";
    par[2].first = 10;
    par[2].second = "Anne Livia";

    cout << par[0].first << " - " << par[0].second << endl;
    cout << par[1].first << " - " << par[1].second << endl;
    cout << par[2].first << " - " << par[2].second << endl;

    // Make Pair
    par[0] = make_pair(10,"C++");
    par[1] = make_pair(20,"Phyton");
    par[2] = make_pair(30,"Java");
    cout << endl << endl;
    for ( int i = 0; i < 3; i++) {
        cout << par[i].first << " - " << par[i].second << endl;
    }
    // Pair of Pairs
    pair<int,pair<string,double>> par2[3]; // Pair of int and pair of string and double

    par2[0]=make_pair(10,make_pair("Mouse",10.55));
    par2[1]=make_pair(10,make_pair("Mouse",10.55));
    par2[2]=make_pair(10,make_pair("Mouse",10.55));

    cout << endl << endl;
    for ( int i = 0; i < 3; i++) {
        cout << par2[i].first << " - " << par2[i].second.first << " - " << par2[i].second.second << endl;
    }
    // Advantage of pair: it contains a difference compare
    pair<int,string>A,B;
    A = make_pair(10,"Livia");
    B = make_pair(10,"Macedo"); // It's being compared the first value of the pair, if it's a draw, then the second is gonna be analyzed
    if(A < B) {
        cout << A.second << endl;
    } else {
        cout << B.second << endl;
    }

    // O comparador de pair também nos permite ordenar um vetor de pair facilmente
    vector<pair<int,string>>V;
    pair<int,string>temp;
    for(int i = 0; i < 5; i++) {
        cin >> temp.first >> temp.second;
        V.push_back(temp);
    }
    cout << "Sorted vector of pair\n\n";
    sort(V.begin(),V.end()); // In order to use this function, I must include algorithm
    for(auto i : V) {
        cout << i.first << " " << i.second << " " << endl;
    }

    return 0;
}
