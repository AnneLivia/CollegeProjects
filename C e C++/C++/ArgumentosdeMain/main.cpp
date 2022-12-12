#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        cout << "Quantidade de argumentos: " << argc << endl;
        cout << "Argumentos passados: " << argv[i] << endl;
    }
    return 0;
}
