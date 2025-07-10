class Solution
{
public:
 bool isAnagram(string s, string t)
 {

  if (s.length() != t.length())
   return false;

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  return s == t;
 }
};

/*
Time & Space Complexity

Time complexity:O(nlogn)
Space complexity:O(1) or O(n) depending on the sorting algorithm.

*/