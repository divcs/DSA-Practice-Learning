#include <iostream>
#include <vector>
using namespace std;

void findSubsq(int i, vector<int> &ds, int arr[], int N)
{
    if (i >= N)
    {
        for (int n : ds)
        {
            cout << n << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // pick in seq
    ds.push_back(arr[i]);
    findSubsq(i + 1, ds, arr, N);
    ds.pop_back();

    // not pick in seq
    findSubsq(i + 1, ds, arr, N); // if in rev to print then make this statement above the three
}

int main()
{
    int arr[] = {3, 1, 2, 4};
    int N = 4;
    vector<int> ds;
    findSubsq(0, ds, arr, N);
    return 0;
}