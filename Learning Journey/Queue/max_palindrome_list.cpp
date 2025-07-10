#include <iostream>
#include <vector>
using namespace std;

vector<int> findMaxPalindromeList(const vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return {};

    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int maxLength = 1;
    int start = 0;

    // All subarrays of length 1 are palindromes
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = true;
    }

    // Check for subarrays of length 2
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for lengths greater than 2
    for (int len = 3; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            if (nums[i] == nums[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = true;
                if (len > maxLength)
                {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    return vector<int>(nums.begin() + start, nums.begin() + start + maxLength);
}

int main()
{
    vector<int> input = {15, 10, 15, 34, 25, 15};
    vector<int> output = findMaxPalindromeList(input);

    cout << "Input: ";
    for (int num : input)
        cout << num << " ";
    cout << "\nOutput: ";
    for (int num : output)
        cout << num << " ";

    return 0;
}