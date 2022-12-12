#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    void setName(string& name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return this->age;
    }

    string& getName()
    {
        return this->name;
    }

    // Declaring function friend that is going to insert inside the file the values
    friend ofstream& operator << (ofstream &f, const Person& p);

    friend istream& operator>>(istream &is, Person& p) {
        is >> p.name >> p.age;
        return is;
    }
};

// Implementing the friend function operator overloading
ofstream& operator << (ofstream &f, const Person& p)
{
    f << p.name << " " << p.age <<  endl;
    return f;
}

char menu(void)
{
    char answer;
    cout << "1 - Insert people.\n";
    cout << "2 - List people.\n";
    cout << "3 - Quit.\n";
    cout << "Type here: ";
    cin >> answer;
    return answer;
}

int main()
{
    char resp;
    while(true)
    {
        resp = menu();
        if (resp == '1') {
            ofstream objectFile("people.txt",fstream::app); //fstream::app = append version.
            string name;
            Person p;
            int age;
            setbuf(stdin,NULL);
            cout << "Type the name: ";
            getline(cin,name);
            cout << "Type the age: ";
            cin >> age;
            p.setAge(age);  p.setName(name);
            objectFile << p;
        } else if (resp == '2') {
            cout << "Listing the people: " << endl;
            Person p;
            ifstream objectFile("people.txt");
            // verifica se arquivo existe e se é possivel ler
            if(objectFile.good())
            {
                // eof = end of file
                // enquanto nao chegar no final do arquivo
                while(objectFile >> p)
                {
                    // faz a extracao dos dados
                    cout << "Nome: " << p.getName() << endl;
                    cout << "Age: " << p.getAge() << endl;
                }

                objectFile.close();
            } else {
                cout << "Falha ao abrir arquivo!\n\n";
            }

        } else if (resp == '3') {
            cout << "The program has finished.\n";
            exit(1);
        } else {
            cout << "Invalid option.\n";
            break;
        }
        system("cls");
    }
    return 0;
}
