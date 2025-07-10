/*
Check Palindrome and Symmetricity
For a string to be same as its reflection in the mirror, it should satisfy the following conditions:

The given string “S” needs to be a palindrome.
All the characters of the string must be symmetric so that the reflection of the characters remains the same.
The symmetric characters are AHIMOTUVWXY.
Store the symmetric characters in an unordered set, traverse the string, and if the string contains any non-symmetric character, then return false.
If all the characters present in the string are symmetric, then check if the string is a palindrome or not. If the string is a palindrome, then return true, otherwise, return false.
Time Complexity
O(N), where N is the length of the string.



Finding an element in an unordered set takes constant time, O(1) on average. Thus, traversing the string to check for symmetric characters takes O(N * 1) = O(N) time.
Checking whether the string is a palindrome or not also takes linear time, O(N)
So, the final time complexity is O(N + N) = O(N).

Space Complexity
O(1).



Only constant additional space is required to store the symmetric characters.
*/

/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where N is the length of the string.
*/

#include <algorithm>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

// Function to check if the string is a mirror string.
bool isReflectionEqual(string &s)
{
 // Symmetric characters.
 unordered_set<char> symmetric = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
 int len = s.length();

 // Checking if all the characters in the string are symmetric.
 for (int i = 0; i < len; i++)
 {
  // If the string contains a non-symmetric character return false.
  if (symmetric.find(s[i]) == symmetric.end())
   return false;
 }

 string rev = s;
 reverse(rev.begin(), rev.end());

 // Checking if the string is a palindrome.
 if (s == rev)
  return true;
 else
  return false;
}

int main()
{
 int T;
 cin >> T;

 while (T--)
 {
  string S;
  cin >> S;
  cout << (isReflectionEqual(S) ? "YES" : "NO") << endl;
 }

 return 0;
}
// 2. -------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

bool isMirrorReflection(string &s)
{
 unordered_set<char> mirrorSet = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
 int n = s.size();

 for (int i = 0; i <= n / 2; i++)
 {
  if (mirrorSet.find(s[i]) == mirrorSet.end() || s[i] != s[n - i - 1])
  {
   return false;
  }
 }
 return true;
}

int main()
{
 int T;
 cin >> T;

 while (T--)
 {
  string S;
  cin >> S;
  cout << (isMirrorReflection(S) ? "YES" : "NO") << endl;
 }

 return 0;
}

//  or

/*
#include <bits/stdc++.h>
bool isReflectionEqual(string &s)
{
 bool arr[26] = {1,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,1,0};
    int i =0;
    int j = s.size()-1;
    while(i<=j){
        if(arr[s[i]-65] && arr[s[j]-65] && s[i] == s[j]){}else{
            return false;
        }
        i++;
        j--;
    }
    return true;
}
*/