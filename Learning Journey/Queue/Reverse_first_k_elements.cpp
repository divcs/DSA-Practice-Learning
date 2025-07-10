#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    int k = 3;

    // push k elements in stack
    stack<int> s;
    while (k--)
    {
        s.push(q.front());
        q.pop();
    }

    // push the remaining elements in array
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }

    // iterate array then stack and push in queue
    while (!s.empty())
    {
        q.push(s.top());
        // cout << s.top() << " ";
        s.pop();
    }

    int si = v.size();
    for (int i = 0; i < si; i++)
    {
        q.push(v[i]);
        // cout << v[i] << " ";
    }

    // iterate queue

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}