#include <iostream>
#include <vector>
using namespace std;
void subsqSum(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (int n : ds)
                cout << n << " ";
            cout << endl;
        }
        return; // ✅ stop further recursion
    }

    // pick the element
    ds.push_back(arr[ind]);
    s += arr[ind];
    subsqSum(ind + 1, ds, s, sum, arr, n);

    // don't pick the element
    s -= arr[ind];
    ds.pop_back();
    subsqSum(ind + 1, ds, s, sum, arr, n);
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