#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void showMensage(const char* c)
{
    cout << "Mostrado string convertida para vetor de caracteres: " << c << endl;
}

int main()
{
    string str = "Anne Livia";
    cout << "String: " << str << endl;
    cout << "Tamanho com size: " << str.size() << endl;
    cout << "Tamanho com length: " << str.length() << endl;
    cout << "Caracter que pode ser acessado no indice 1: " << str.at(1) << endl;

    string str1 = "Anne";
    str1.append(" Livi");
    cout << "String concatenada com append: " << str1 << endl;
    str1.push_back('a');
    cout << "Caracter adicionado no final: " << str1<< endl;
    str1.insert(0," Adicionado");
    cout << "Negocio inserido: " << str1 << endl;
    str1.erase(0,strlen( "Adicionado "));
    cout << "Nome com o adicionado apagado: " << str1 << endl;

    //str.erase(0,str.size());
    str.clear(); // Limpa string também
    if(str.empty())
        cout << "String vazia\n";
    else
        cout << "String NAO vazia\n";

    showMensage(str1.c_str()); // Uso essa função para que seja retornado uma string com compatilidade com as strings do c, que é um vetor de caracteres;

    str1.replace(1,4,"nNE ");
    cout << "Nome com replace: " << str1 << endl;

    string str2;
    cout << "Type your name: ";
    getline(cin,str2);

    str1 +=str2;
    cout << "Concatenada com +=: " << str1 << endl;

    string str3;

    str3.assign(str1);
    cout << "Assign fuction: " << str3 << endl;

    // Bucky tutorial

    cout << "Subtring: " << str3.substr(1,3) << endl; // create a small string from a big string

    string one = "Apples ";
    string two = "Beans ";
    cout << one << two << endl;
    one.swap(two); // Change the place of the strings, it comes in handy when we are sorting.
    cout << one << two << endl;

    string test = "Ham is very am I am";
    cout << endl << test << endl;
    cout << test.find("am") << endl; // the address of the first occurence.
    cout << test.rfind("am"); // reverse string.


    return 0;
}
