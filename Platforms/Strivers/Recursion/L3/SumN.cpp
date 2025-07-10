#include <iostream>
using namespace std;

int sumN(int N)
{
    if (N == 0)
        return 0;
        
    return N + sumN(N - 1);
}

int main()
{
    int N;
    cin >> N;

    sumN(N);
    return 0;
}