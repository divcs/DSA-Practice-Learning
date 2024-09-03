// Method 1: using two var

#include <iostream>
using namespace std;

bool isPalindrome(string s)
{

 int left = 0, right = s.length() - 1;
 while (left < right)
 {
  if (!isalnum(s[left]))
   left++;
  else if (!isalnum(s[right]))
   right--;
  else if (tolower(s[left]) != tolower(s[right]))
   return false;
  else
  {
   left++;
   right--;
  }
 }
 return true;
}
int main()
{

 string str = "ABCDCBA";
 bool ans = isPalindrome(str);

 if (ans == true)
 {
  cout << "Palindrome";
 }
 else
 {
  cout << "Not Palindrome";
 }
 return 0;
}

// Method 2: Recursive

#include <iostream>
using namespace std;

bool palindromeTest(int i, string &s)
{
 if (i >= s.length() / 2)
  return true;
 if (s[i] != s[s.length() - i - 1])
  return false;
 return palindromeTest(i + 1, s);
}

int main()
{
 string s = "race";
 bool res = palindromeTest(0, s);
 if (res == true)
 {
  cout << "Palindrome";
 }
 else
  cout << "Not Palindrome";
 cout << endl;

 return 0;
}