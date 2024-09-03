
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