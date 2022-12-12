#include <iostream>

using namespace std;

int my_strlen(char *palavra);
char* my_strcat(char *word1, char *word2);

int main(int argc, char *argv[])
{
    char *nome1 = new char[100];
    char *nome2 = new char[100];

    cout << "Type a first word: " << endl;
    cin >> nome1;
    cout << "type the second word: " << endl;
    cin >> nome2;
    cout << "\n\n";
    nome1 = my_strcat(nome1,nome2);
    cout << "Result: " << nome1 << endl;

    delete []nome1;
    delete []nome2;
    return 0;
}

int my_strlen(char *palavra){
    int tam = 0;
    while(*palavra != '\0')
    {
        palavra++;
        tam++;
    }
    return tam;
}

char* my_strcat(char* word1, char* word2)
{
    char* resultado;
    int tam_str[2];
    tam_str[0] = my_strlen(word1);
    tam_str[1] = my_strlen(word2);
    resultado = new char[tam_str[0]+tam_str[1]];
    char *p = resultado;
    while(*word1 != '\0')
    {
        *p = *word1;
        p++;
        word1++;
    }
    while(*word2 != '\0')
    {
        *p = *word2;
        p++;
        word2++;
    }
    return resultado;
    delete [] resultado;
}
