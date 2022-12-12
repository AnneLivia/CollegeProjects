#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    vector<int>v(10);
    cout << "Before IOTA: \n";
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    /*
        IOTA is a function that belongs to numeric header that
        that fills a specific range [first, last) with sequentially increasing values
        starting with value and repetitively evaluating ++value.
        template< class ForwardIt, class T >
        void iota( ForwardIt first, ForwardIt last, T value );
        Its possible implementation is:
        template<class ForwardIt, class T>
        void iota(ForwardIt first, ForwardIt last, T value)
        {
            while(first != last) {
                *first++ = value;
                ++value;
            }
        }
    */

    iota(begin(v),end(v),0);
    cout << "After IOTA: \n";
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    list<int>l(10);
    cout << "List here\n";
    iota(l.begin(),l.end(),-4);
    for(auto i : l)
        cout << i << endl;
    return 0;
}
