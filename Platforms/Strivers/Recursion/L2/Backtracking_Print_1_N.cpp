#include <iostream>
using namespace std;

void backtrack_count_forward(int i, int N)
{
    if (i < 1)
    {
        return;
    }
    backtrack_count_forward(i - 1, N);
    cout << i << " ";
}

void backtrack_count_back(int i, int N)
{
    if (i > N)
        return;
    backtrack_count_back(i + 1, N);
    cout << i << " ";
}
int main()
{
    int N;
    cin >> N;

    // backtrack_count_forward(N, N);
    backtrack_count_back(1, N);

    return 0;
}