#include <iostream>
#include <string>

using namespace std;
/*
    Isso aqui em baixo é uma função que recebe string em forma de c e não de c++
*/

void showMessage(const char* p)
{
    cout << p << endl;
}

int main()
{
    string nome = "Anne Livia";

    cout << nome << endl;
    cout << nome.at(3) << endl;      // Aqui vai imprimir um caractere de acordo com o numero que eu por no at.
    cout << nome.size() << endl;     // Aqui será imprimido o tamanho da minha string
    cout << nome.length() << endl;   // Aqui também será impresso o tamanho da minha string

    string firstName = "Anne";
    firstName.append(" Livia");      // Aqui eu estou colocando o nome livia com espaço na frente, na variavel firstname,
                                     // eu estou concatenando
    cout << firstName << endl;

    nome.insert(nome.size(), " da Fonseca");
    cout << nome << endl;
    nome.erase(10,nome.size());
    cout << nome << endl;

    showMessage(nome.c_str()); // Dessa forma aqui, c_str(), eu converto string para const char *

    //nome.erase(0,nome.size());
    /*nome.clear(); // paga toda a string.
    if(nome.empty())
        cout << "String vazia" << endl;
    else
        cout << "String nao vazia" << endl;
    */

    size_t str = nome.find("Ann");

    if(str != string::npos)
    {
        cout <<" Aqui";
    }

    return 0;

}
