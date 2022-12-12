#include <iostream>

using namespace std;

class Person{
private:
    int age;
    string name;
public:
    Person()
    {
        name = "";
        age = 0;
    }

    // ostream = saida
    // istream = entrada
    friend ostream& operator << (ostream& c, Person& p); // A função é friend porque ela vai ter acesso a classe mas não faz parte dela
    friend istream& operator >> (istream &i, Person& p); // A função é friend porque ela vai ter acesso a classe mas não faz parte dela
};

ostream& operator << (ostream&c, Person& p) // Estudar mais a respeito disso
{
    c << p.name << " " << p.age;
    return c;
}

istream& operator >> (istream&i, Person& p) // Estudar mais a respeito disso
{
    i >> p.name >> p.age;
    return i;
}
int main()
{
    Person p;
    cin >> p;
    cout << p;
    return 0;
}
