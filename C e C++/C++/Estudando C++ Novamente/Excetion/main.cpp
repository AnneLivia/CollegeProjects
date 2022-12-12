#include <iostream>

using namespace std;

class exc{
private:
    string error;
public:
    exc(string error)
    {
        this->error = error;
    }

    string getError()
    {
        return this->error;
    }
};
int main()
{

    return 0;
}
