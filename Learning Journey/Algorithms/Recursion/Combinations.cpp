void backtrack(int n, int k, int start, vector<int> &path, vector<vector<int>> &res)
{
    if (path.size() == k)
    {
        res.push_back(path);
        return;
    }
    for (int i = start; i <= n; i++)
    {
        path.push_back(i);
        backtrack(n, k, i + 1, path, res); // Only forward to avoid duplicates //i+1 no reuse
        path.pop_back();
    }
}

/*
You build combinations by choosing next elements in increasing order (no re-use unless allowed).

Use a loop starting from current index to avoid duplicates.
*/