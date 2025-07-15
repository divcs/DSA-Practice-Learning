void backtrack(int index, vector<int> &nums, vector<int> &path, vector<vector<int>> &result)
{
    result.push_back(path); // every path is a valid subset
    for (int i = index; i < nums.size(); i++)
    {
        path.push_back(nums[i]);              // choose
        backtrack(i + 1, nums, path, result); // explore
        path.pop_back();                      // undo choice
    }
}

// At each index, you can include or exclude the current number.

// This creates a binary tree of choices → 2 ^ n subsets.

/*
Subsets II:
Handle duplicates → Sort input.

Skip duplicates when the same number has already been chosen at a level.
*/
if (i > index && nums[i] == nums[i - 1])
    continue;
