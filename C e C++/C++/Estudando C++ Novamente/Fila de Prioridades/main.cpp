#include <iostream>
#include <queue>

/**
    Priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest
    of the elements it contains, according to some strict weak ordering criterion.
*/

using namespace std;

int main()
{

    priority_queue <int> q;
    //  priority_queue <int, vector<int>, greater<int> > q; // invert the order
    q.push(2);
    q.push(20);
    q.push(1);

    cout << "The element at the top is: " << q.top() << endl;
    if(!q.empty())
        cout << "The priority queue is not empty" << endl;
    else
        cout << "The priority is empty" << endl;

    cout << "\n\nSize of the priority queue: " << q.size() << endl;
    cout << "Showing elements in priority order: " << endl;
    while(!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    cout << "\n\nSize of the priority queue: " << q.size() << endl;
    return 0;
}
