#include <iostream>
#include <vector>
using namespace std;

int maxSubArrSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int maxSum = 0;
    for (int i = 0; i < n - k; i++)
    {
        int sum = 0;

        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
        }

        maxSum = max(sum, maxSum);
    }
    return maxSum;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5, -2, 0};
    int k = 3;
    cout << maxSubArrSum(arr, k);

    return 0;
}