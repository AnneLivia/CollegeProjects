//Abrir um arquivo para entrada
// Ler o conteudo desse arquivo
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("teste.txt");
    string texto;
    char c = in.get(); // Pegando o valor do caracter
    texto.push_back(c); // Inserindo na string

    cout << "\nMostrando cada caracter" << endl;

    while(in.good()) // Enquanto for possivel extrair caracter do arquivo
    {
        cout << c;
        c = in.get();
        texto.push_back(c);
    }

    cout << texto << endl;

    return 0;
}
