#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 = {1,2,3,4,5};
    vector<int> vec3(5);

    transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(), [](int x, int y){return x + y;});

    for(auto i : vec3)
        cout << i << " ";
    cout << endl;

    int age = 43;
    bool canIvote = age >= 18 ? true : false;
    cout.setf(std::ios::boolalpha);
    cout << canIvote << endl;
    return 0;
}
