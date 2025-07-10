class Solution
{
public:
    int maxEl(queue<int> q)
    {
        int max = INT_MIN;

        while (!q.empty())
        {
            if (q.front() > max)
            {
                max = q.front();
            }
            q.pop();
        }
        return max;
    }

    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        queue<int> q;
        vector<int> v;

        int n = nums.size();

        for (int i = 0; i < k - 1; i++)
        {
            q.push(nums[i]);
        }

        for (int i = k - 1; i < n; i++)
        {
            q.push(nums[i]);

            int ans = maxEl(q);
            v.push_back(ans);
            q.pop();
        }
        return v;
    }
};