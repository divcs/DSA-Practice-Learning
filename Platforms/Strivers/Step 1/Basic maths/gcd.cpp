#include <iostream>
#include <algorithm>
using namespace std;

int findGcd(int a, int b)
{
 while (a > 0 && b > 0)
 {
  if (a > b)
  {
   a = a % b;
  }
  else
   b = b % a;
 }
 if (a == 0)
 {
  return b;
 }
 else
  return a;
}

int main()
{

 int num1, num2, gcd;
 cout << "Enter the first number: ";
 cin >> num1;

 cout << "Enter the second number: ";
 cin >> num2;

 gcd = findGcd(num1, num2);

 cout << "----------------------------" << endl;
 cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

 return 0;
}