#include <iostream>
#include <vector>
using namespace std;
int subsqSum(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
            return 1;
        else
            return 0; // ✅ stop further recursion
    }

    // pick the element

    s += arr[ind];
    int l = subsqSum(ind + 1, s, sum, arr, n);

    // don't pick the element
    s -= arr[ind];

    int r = subsqSum(ind + 1, s, sum, arr, n);

    return l + r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    cout << subsqSum(0, 0, sum, arr, n);
    return 0;
}