// for int array max size
// inside main: 10^6
// outside main (global): 10^7 i.e. 1e7

// for boolean array max size
// inside main: 10^7
// outside main (global): 10^8 i.e. 1e8

// else gives segmentation fault
#include <iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter array size:";
 cin >> n;
 int arr[n];
 // taking input array
 cout << "Enter array elements:";
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 int max_num = arr[0];
 int i = 0;
 while (i <= n)
 {
  if (arr[i] > max_num)
  {
   max_num = arr[i];
  }
  i++;
 }
 // no of elements to be searched
 int q;
 cout << "Enter how many numbers to be searched:";
 cin >> q;

 // hash array precomputation
 int hash[max_num + 1] = {0};
 for (int i = 0; i < n; i++)
 {
  hash[arr[i]]++;
 }
 cout << "Enter numbers to be searched:";
 while (q--)
 {
  int num;
  cin >> num;

  hash[num] == 0 ? cout << num << "Not Found" << endl : cout << "Count of " << num << " is: " << hash[num] << endl;
 }

 return 0;
}