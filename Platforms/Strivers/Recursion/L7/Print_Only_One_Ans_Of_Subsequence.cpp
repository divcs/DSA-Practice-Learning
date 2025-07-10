#include <iostream>
#include <vector>
using namespace std;
bool subsqSum(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (int n : ds)
                cout << n << " ";
            cout << endl;
            return true;
        }
        return false; // ✅ stop further recursion
    }

    // pick the element
    ds.push_back(arr[ind]);
    s += arr[ind];
    if (subsqSum(ind + 1, ds, s, sum, arr, n) == true)
        return true;

    // don't pick the element
    s -= arr[ind];
    ds.pop_back();
    if (subsqSum(ind + 1, ds, s, sum, arr, n) == true)
        return true;
    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    subsqSum(0, ds, 0, sum, arr, n);
    return 0;
}