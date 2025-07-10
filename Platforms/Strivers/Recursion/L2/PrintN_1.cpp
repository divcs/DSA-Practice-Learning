#include <iostream>
using namespace std;

void rev(int i, int N)
{
    if (i < 1)
        return;

    cout << i << " ";
    rev(i - 1, N);
}

void front(int i, int N)
{
    if (i > N)
        return;
    cout << i << " ";
    front(i + 1, N);
}
int main()
{
    int N;
    cin >> N;
    // rev(N, N); // N doesn't needed to be passed as it hold no value in recursion function as of now

    front(1, N);
    return 0;
}