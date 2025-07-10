#include <iostream>
#include <queue>
#include <climits>
#include <stack>
using namespace std;

int maxEl(queue<int> &q)
{
    int max = INT_MIN;

    while (!q.empty())
    {
        if (q.front() > max)
        {
            max = q.front();
        }
        q.pop();
    }
    return max;
}

int minEl(queue<int> &q)
{
    int min = INT_MAX;

    while (!q.empty())
    {
        if (q.front() < min)
        {
            min = q.front();
        }
        q.pop();
    }
    return min;
}

void reverse(queue<int> &q)
{
    stack<int> s;

    // 1. push all elements of q to s
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    // 2. push all elements of s to q
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void reverseKNodes(queue<int> &q, int k)
{
    stack<int> s;
    // 1. push first k nodes to s
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    // 2. push rest elements of q to v
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }

    // 3. push elements of s to q and v to q
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    int si = v.size();
    for (int i = 0; i < si; i++)
    {
        q.push(v[i]);
    }

    // 4. iterate q
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // cout << maxEl(q);
    // cout << minEl(q);
    // reverse(q);
    reverseKNodes(q, 3);
    return 0;
}