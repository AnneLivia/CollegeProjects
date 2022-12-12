#include <iostream>
#include <vector>

using namespace std;

class Point
{
public:
    int num1,num2;
    Point(int n1, int n2) : num1(n1), num2(n2) {}
};

int main()
{
    vector<Point*> pPoint;
    Point p1(1,2); Point p2(3,2);
    pPoint.push_back(&p1);
    pPoint.push_back(&p2);

    /*
    vector<Point *>::iterator pIt;

    for (pIt = pPoint.begin() ; pIt != pPoint.end(); pIt++)
    {
        cout << "(" << (*pIt)->num1 << "," << (*pIt)->num2 << ")" << endl;
    }
    */

    cout << pPoint[0]->num1 << "  " << pPoint[0]->num2 << endl;
    return 0;
}
