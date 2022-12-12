#include <iostream>

using namespace std;

struct Person{
    string name;
    int age;
    double weight, height;
};

void changeNumber(int &a, int &b) // with the & I'm send the very same variable, except for the fact that this now has another name, it has two names
{
    int aux = a;
    a = b; // this a is the same variable in the main function
    b = aux; // as b, is the same variable in the main function
    cout << "Inside the function: " << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
}

double& getIMC(Person &p) // A function that returns by reference, this function returns a nickname
{
    double result = p.weight / (p.height * p.height);
    double &imc = result; // return the nickname.
}

int main()
{
    Person p = {"Livia",20,92.45,1.75};
    int a = 1, b = 3;
    cout << "The IMC is:  " << getIMC(p) << endl;
    cout << "Number of a and b before send it to the function: " << endl;
    cout << a << " " << b << endl;
    changeNumber(a,b);
    cout << "\nNumber of a and b after send it to the function: " << endl;
    cout << a << " " << b << endl << endl;
    cout << "Inside the function: " << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    return 0;
}
