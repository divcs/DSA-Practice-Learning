// map stores values in sorted order

#include <iostream>
#include <map>
using namespace std;

int main()
{

 int n;
 cout << "Enter the number of elements in the array: ";
 cin >> n;
 int arr[n];
 cout << "Enter the elements of the array: ";
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 // pre-compute
 map<int, int> mpp;
 for (int i = 0; i < n; i++)
 {
  mpp[arr[i]]++;
 }

 // iteration
 for (auto i : mpp)
 {
  cout << i.first << "-> " << i.second << endl;
 }
 int q;
 cout << "Enter the number of queries: ";
 cin >> q;
 cout << "Enter queries:";
 while (q--)
 {
  // fetch
  int num;
  cin >> num;
  cout << mpp[num] << endl;
 }
 return 0;
}