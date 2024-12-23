// unordered map stores values in a random order
// storing and fetching takes constant time O(1): Best and average cases
// worst case: O(N) very rarely happens, because of internal collisions (Collision occurs when all the keys goes to the same hash place in mod method of linear chaining)

// Prefer unordered maps over ordered maps first, if TLE arises switch to ordered maps

// Difference: Map: pair<int,int> (any data structure)can work as a key, but
// unordered_map: this is not allowed, only int,double, char, string, etc. can work as a key

// Hashing

// Division method: Linear chaining
// Folding method
// Mid square method

#include <iostream>
#include <unordered_map>
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
 unordered_map<int, int> mpp;
 for (int i = 0; i < n; i++)
 {
  // N for loop iteration
  mpp[arr[i]]++; // when this operations takes N time, total time complexity is N*N
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