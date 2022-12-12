#include <iostream>
#include <stdio.h>

class Numbers
{
private:
    int num;
public:
    Numbers();
    Numbers(int);
    Numbers operator / (Numbers &other);
    int getNum();
};

Numbers::Numbers(int n) : num(n){}
Numbers::Numbers(){}
Numbers Numbers::operator /(Numbers &other)
{
    Numbers n;
    n = this->num / other.num;
    return (n);
}
int Numbers::getNum()
{
    return this->num;
}

int main(){
    Numbers n[3] = { {8}, {2},};

    n[2] = n[0] / n[1];

    std::cout << n[2].getNum() << std::endl;
    return 0;
}
