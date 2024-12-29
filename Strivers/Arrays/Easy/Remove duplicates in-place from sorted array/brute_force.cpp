#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
 int s = nums.size();

 set<int> st;

 // adding elements to set
 for (int i = 0; i < s; i++)
 {
  st.insert(nums[i]);
 }

 int index = 0;
 for (auto it : st)
 {
  nums[index] = it;
  index++;
 }

 return index;
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