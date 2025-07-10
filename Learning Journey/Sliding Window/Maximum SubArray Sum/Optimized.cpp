#include <iostream>
#include <vector>
using namespace std;

int maxSubArrSum(vector<int> &arr, int k)
{
    int maxSum = 0;
    int sum = 0;
    int left = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;
    for (int right = k; right < arr.size(); right++)
    {
        sum -= arr[left];
        left++;
        sum += arr[right];

        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{

    vector<int> arr = {1, 2, 4, 5, -2};
    int k = 2;
    cout << maxSubArrSum(arr, k);
    return 0;
}