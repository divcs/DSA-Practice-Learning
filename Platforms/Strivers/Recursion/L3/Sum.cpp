#include <iostream>
using namespace std;
void sumN(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    return sumN(i - 1, sum + i);
}

int main()
{

    int N;
    cin >> N;

    sumN(N, 0);
    return 0;
}