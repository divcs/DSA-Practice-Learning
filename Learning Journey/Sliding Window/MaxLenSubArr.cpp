#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxLen(vector<int> &arr, int sum)
{
    int csum = 0;
    int left = 0;
    int mlen = INT_MIN;

    for (int right = 0; right < arr.size(); right++)
    {
        csum += arr[right];

        if (csum > sum)
        {
            csum -= arr[left++];
        }
        if (csum == sum)
        {
            mlen = right - left + 1;
        }
    }
    
    return mlen;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5, -2, 0};
    int sum = 2;
    cout << maxLen(arr, sum);

    return 0;
}