//Abrir um arquivo para saida
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* ofstream output("saida.txt");
    output << "Aprendendo c++\n";
    output << "WWW.annelivia.com\n";

*/
    ifstream in("saida.txt");
    char c;

    while(true)
    {
        in >> c;
        if(in.fail()) // Testar se realmente tem algum cartacter para ser lido
            break;
        cout << c;
    }
    return 0;
}

