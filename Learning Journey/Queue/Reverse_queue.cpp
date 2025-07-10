#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> s;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // queue ko stack m push
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    // stack se queue m push

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    // traverse the queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}