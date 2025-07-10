#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(20);
    q.push(50);

    int s = q.size();

    while (s--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    return 0;
}