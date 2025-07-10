#include <bits/stdc++.h>
using namespace std;
// Using sliding window technique
int findmaxconssum(int arr[], int n, int k)
{
    int currsum = 0;
    for (int i = 0; i < k; i++)
    {
        currsum += arr[i];
    }
    int maxsum = currsum;
    for (int i = k; i < n - k; i++)
    {
        currsum -= arr[i - k];
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}
int main()
{
    int arr[] = {1, 7, 6, 2, 3, 4, 5};
    int n = 7;
    int k = 2;
    cout << findmaxconssum(arr, n, k) << endl;
    return 0;
}