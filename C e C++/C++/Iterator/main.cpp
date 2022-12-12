#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main ( ) {

    vector<string>produtos = {"mouse","teclado","monitor","gabinete","cx.som"};
    vector <string>::iterator it; // Creating iterator.
    // To create for every iterator auto::iterator it; // This can be used in any place

    for ( it = produtos.begin(); it < produtos.end(); it++) {
        cout << *it << endl;
    }
    /*
        Used for collections
        Advance - Advance n positions in my collection
        next - it also advances n positions, without change the position of the original pointer
        prev -
    */
    it = produtos.begin();
    cout << "\nUsing advance function\n\n";
    advance(it,3);
    cout << "--> " << *it << endl;
    cout << "\nUsing next function\n\n";
    it = produtos.begin();
    cout << "--> " << *next(it,3) << endl;
    cout << "\nUsing prev function\n\n";
    it = produtos.end();
    cout << "--> " << *prev(it,2) << endl;
    return 0;
}
