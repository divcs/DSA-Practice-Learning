class Solution
{
public:
 int strStr(string haystack, string needle)
 {
  // If the needle is empty, return 0
  if (needle.empty())
  {
   return 0;
  }

  int haystackLength = haystack.length();
  int needleLength = needle.length();

  // Loop through the haystack
  for (int i = 0; i <= haystackLength - needleLength; i++)
  {
   // Check if the substring from the current index matches the needle
   int j;
   for (j = 0; j < needleLength; j++)
   {
    if (haystack[i + j] != needle[j])
    {
     break; // Mismatch found, break the inner loop
    }
   }
   // If we reached the end of the needle without mismatches, return the starting index
   if (j == needleLength)
   {
    return i;
   }
  }

  // If we didn't find the needle, return -1
  return -1;
 }
};