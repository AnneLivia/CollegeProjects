#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;

int main()
{
    stack <int> idade;

    for(int i = 2; i < 10; i+=2)
    {
        idade.push(i);
    }

    for(int i = 0; i  <= idade.size(); i++)
    {
        printf("The number is: %d\n",idade.top());
        idade.pop();
    }

    if(idade.empty())
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("%d\n",idade.top());
        idade.pop();
    }
    if(idade.empty())
    {
        printf("The stack is empty\n");
    }
    return 0;
}
