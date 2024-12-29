#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
 int s = nums.size();
 if (s == 0)
  return 0; // Handle empty vector edge case

 int left = 0;

 for (int right = 1; right < s; right++)
 {
  if (nums[right] != nums[left])
  {
   nums[left + 1] = nums[right];
   left++; // Increment left pointer
  }
 }
 return left + 1; // Return the new size of the array with duplicates removed
}

int main()
{
 int size;
 cin >> size;
 vector<int> v(size);
 for (int i = 0; i < size; i++)
 {
  cin >> v[i];
 }

 int newSize = removeDuplicates(v);
 cout << newSize << endl;

 // Print the modified vector (up to the new size)
 for (int i = 0; i < newSize; i++)
 {
  cout << v[i] << " ";
 }
 cout << endl;

 return 0;
}
