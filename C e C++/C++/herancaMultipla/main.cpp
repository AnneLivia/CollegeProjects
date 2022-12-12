#include <iostream>

using namespace std;

class Pai{
public:
    void foo(){
        cout << "Oi eu sou o pai 1" << endl;
    }
};

class pai2{
public:
    void foo(){
        cout << "Oi eu sou o pai 2" << endl;
    }
};

class filha : public Pai, public pai2{
public:
    void foo(){
        cout << "Oi, eu sou a filha " << endl;
    }
};
int main()
{
    filha f;
    f.Pai::foo();
    f.pai2::foo();
    f.foo();
    return 0;
}
