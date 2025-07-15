void backtrack(vector<int> &candidates, int target, int start, vector<int> &path, vector<vector<int>> &res)
{
    if (target == 0)
    {
        res.push_back(path);
        return;
    }
    for (int i = start; i < candidates.size(); i++)
    {
        if (candidates[i] > target)
            continue;
        path.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], i, path, res); // i → reuse
        path.pop_back();
    }
}

/*
void backtrack(vector<int>& candidates, int target, int start, vector<int>& path, vector<vector<int>>& res) {
    if (target == 0) {
        res.push_back(path);
        return;
    }
    for (int i = start; i < candidates.size(); i++) {
        if (candidates[i] > target) continue;
        path.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], i, path, res); // i → reuse
        path.pop_back();
    }
}

 Leetcode 40: Combination Sum II (no re-use + duplicates)
Sort input

Skip duplicate choices on the same level.
*/

if (i > start && candidates[i] == candidates[i - 1])
    continue;
