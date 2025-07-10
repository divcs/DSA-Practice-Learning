#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is palindrome (without converting to string)
bool isPalindrome(int num)
{
 int original = num, reversed = 0;

 while (num > 0)
 {
  reversed = reversed * 10 + (num % 10);
  num /= 10;
 }

 return original == reversed;
}

// Function to get all palindromic numbers from 1 to N
vector<int> getPalindromes(int N)
{
 vector<int> palindromes;

 for (int i = 1; i <= N; i++)
 {
  if (isPalindrome(i))
  {
   palindromes.push_back(i);
  }
 }
 return palindromes;
}

int main()
{
 int T;
 cin >> T; // Number of test cases

 while (T--)
 {
  int N;
  cin >> N;
  vector<int> result = getPalindromes(N);

  // Print the palindromic numbers
  for (int num : result)
  {
   cout << num << " ";
  }
  cout << endl;
 }

 return 0;
}
