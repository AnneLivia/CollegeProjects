#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{

    vector<int>v = {4,3,2,3,5,6};
    vector<int>r, g;

    sort(v.begin(), v.end(), [](int x, int y){return x < y;});
    for_each(v.begin(), v.end(), [&](int x){r.push_back(x * 2);});
    //transform(v.begin(), v.end(), r.begin(), g.begin(), [](int x, int y){return ((x + y) * 2);});

    for(auto i : g)
        cout << i << endl;
    return 0;
}
