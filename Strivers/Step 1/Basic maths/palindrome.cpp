
#include <iostream>
using namespace std;

bool palindrome(int n)
{

 int revNum = 0;

 int dup = n;

 while (n > 0)
 {
  // Extract the last digit of the number
  int ld = n % 10;
  // Build the reverse number by appending the last digit
  revNum = (revNum * 10) + ld;
  // Remove the last digit from the original number
  n = n / 10;
 }

 if (dup == revNum)
 {

  return true;
 }
 else
 {

  return false;
 }
}

int main()
{
 int number = 122241;

 if (palindrome(number))
 {
  cout << number << " is a palindrome." << endl;
 }
 else
 {
  cout << number << " is not a palindrome." << endl;
 }

 return 0;
}
