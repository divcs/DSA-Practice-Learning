#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
 int s = nums.size();
 int left = 0;
 // int right = left + 1;

 for (int right = 1; right < s; right++)
 {
  if (nums[right] != nums[left])
  {
   nums[left + 1] = nums[right];
   left++; // increment left pointer
  }
 }
 return left + 1; // return the new size of the array with duplicates removed
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

 cout << removeDuplicates(v) << endl;
 return 0;
}