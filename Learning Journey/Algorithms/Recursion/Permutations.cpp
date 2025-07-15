void backtrack(vector<int> &nums, vector<bool> &used, vector<int> &path, vector<vector<int>> &res)
{
    if (path.size() == nums.size())
    {
        res.push_back(path);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (used[i])
            continue;
        used[i] = true;
        path.push_back(nums[i]);
        backtrack(nums, used, path, res);
        path.pop_back();
        used[i] = false;
    }
}

/*
Generate all permutations (order matters, all elements used).

✅ Pattern:
At each level, pick unused elements and mark them as used.

Base case: when current path size equals nums size.


Permutations II:
Input may have duplicates.

Sort input first and skip duplicates if used[i - 1] was false.
*/

if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
    continue;
