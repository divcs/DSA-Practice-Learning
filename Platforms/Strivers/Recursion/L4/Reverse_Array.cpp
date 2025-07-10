#include <iostream>
using namespace std;
void rev(int i, int arr[], int N)
{
    if (i >= N / 2)
        return;
    swap(arr[i], arr[N - i - 1]);
    rev(i + 1, arr, N);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    rev(0, arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}