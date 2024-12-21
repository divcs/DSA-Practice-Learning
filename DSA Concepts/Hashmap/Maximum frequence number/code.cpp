#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
 unordered_map<int, int> count;
 int maxFreq = 0;
 int maxAns = 0;

 for (int i = 0; i < arr.size(); i++)
 {
  count[arr[i]]++;
  maxFreq = max(maxFreq, count[arr[i]]);
 }

 // it is an iterator that represents a key-value pair in the map, where it.first is the integer and it.second is its frequency.
 for (auto it : count)
 {
  if (it.second == maxFreq)
  {
   maxAns = it.first;
   break;
  }
 }

 return maxAns;
}

int main()
{
 int n;
 cin >> n;
 vector<int> arr(n);
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 cout << maximumFrequency(arr, n);

 return 0;
}