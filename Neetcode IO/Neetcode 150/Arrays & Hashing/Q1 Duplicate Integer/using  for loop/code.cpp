#include <vector>
#include <algorithm>

class Solution
{
public:
 bool hasDuplicate(std::vector<int> &nums)
 {
  // Sort the vector
  std::sort(nums.begin(), nums.end());

  // Check for duplicates by comparing adjacent elements
  for (int i = 0; i < nums.size() - 1; i++)
  {
   if (nums[i] == nums[i + 1])
   {
    return true; // Duplicate found
   }
  }

  return false; // No duplicates
 }
};
