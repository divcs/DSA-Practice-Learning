#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;
    que.push(1);
    que.push(9);
    que.push(2);
    que.push(4);
    que.push(8);

    while (!que.empty())
    {
        int ans = que.front();
        cout << ans << " ";
        que.pop();
    }
    return 0;
}