#include <algorithm>
void reverseArray(vector<int> &arr, int m)
{
 // Write your code here

 // method 1:
 //  reverse(arr.begin() + m + 1, arr.end());

 //  method 2:
 int start = m + 1;
 int end = arr.size() - 1;

 while (start < end)
 {
  swap(arr[start++], arr[end--]);
 }
}