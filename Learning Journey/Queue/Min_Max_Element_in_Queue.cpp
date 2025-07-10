#include <iostream>
#include <queue>
#include <climits>
using namespace std;

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
int main()
{
    queue<int> q;
    q.push(100);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(10);

    // cout << minEl(q);
    cout << maxEl(q);

    return 0;
}